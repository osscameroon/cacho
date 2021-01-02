#include "../headers/cacho.hpp"

int main()
{
    set("test", "value");
    std::cout << get("test") << std::endl;
    return 0;
}
