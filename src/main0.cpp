#include <iostream> 
#include <sys/stat.h> 

#define MAX_ARR_BOX 100

using namespace std;

struct MyException : public std::exception
{
   std::string s;
   MyException(std::string ss) : s(ss) {}
   ~MyException() throw () {} // Updated
   const char* what() const throw() { return s.c_str(); }
};

typedef struct Box{
    string key;
    string value;
    int timestamp;
} Box;

Box* bb = new Box[MAX_ARR_BOX];

Box setBox(string key, string value);
void getBox(Box b);

bool s(string key, string value);
string g(string key);

bool createDir(string dirr);

int main()
{
    string key, value="ok, ceci est un example !!!";

    // We create the directory
    createDir("cache");

    cout << "> Welcome to in_memo !" << endl;
    cout << "[-] Set a value, key :";
    cin >> key;

    // cout << "[-] Set the value of " << key << ": ";
    // cin >> value;

    if (s(key, value) == true)
    {
        cout << "[+] Value setted successfully !" << endl;
    }
    else
    {
        cout << "[x] An error occured...";
    }

    cout << "[-] < Geting value : ";
    cin >> key;
    cout << g(key) << endl;

    return 0;
}

bool s(string key, string value)
{
    try {
        // We loop curent boxes and try to find if a box already exist with that key
        // if yes, we just replace it
        for (int i=0; i<sizeof(bb); i++){
            if (key == bb[i].key || bb[i].key == "")
            {
                bb[i] = setBox(key, value);
                return true;
            }
        }

        bb[sizeof(bb)] = setBox(key, value);

        return true;
    } catch (MyException& caught) { 
        cout << "[x] Got "<< caught.what() << std::endl;
        return false;
    }
}

string g(string key)
{
    // We loop boxes and return it
    for (int i=0; i<sizeof(bb); i++)
        return (key == bb[i].key) ? bb[i].value : NULL;
    return "";
}

bool createDir(string s)
{
    // A simpleconvertion from string to char*
    char cstr[s.size() + 1];
    s.copy(cstr, s.size() + 1);
    cstr[s.size()] = '\0';

    if(mkdir(cstr, 0777) == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

Box setBox(string key, string value)
{
    Box b;
    b.key = key;
    b.value = value;
    return b;
}

void getBox(Box b)
{
    cout << "key : " << b.key << endl;
    cout << "value : " << b.value << endl;
}
