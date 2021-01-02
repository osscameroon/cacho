#include "../headers/cacho.hpp"

lru_cache<std::string, std::string> cacho_lru(SIZE);

bool set(std::string key, std::string value)
{
    try
    {
        cacho_lru.put(key, value);
        return true;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return false;
    }
}

bool exists(std::string key)
{
    return cacho_lru.exists(key);
}

std::string get(std::string key)
{
    try
    {
        return cacho_lru.get(key);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return "";
    }
}
