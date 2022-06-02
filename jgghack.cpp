

//https://pl.spoj.com/problems/JGGHACK/

#include <iostream>
#include <string>
#include <map>

std::map<char, uint32_t> znaki = 
{
    {'A', 0},
    {'B', 1},
    {'C', 2},
    {'D', 3},
    {'E', 4},
    {'F', 5},
    {'G', 6},
    {'H', 7},
    {'I', 8},
    {'J', 9},
    {'K', 10},
    {'L', 11},
    {'M', 12},
    {'N', 13},
    {'O', 14},
    {'P', 15}

};

std::string odszyfruj(std::string str)
{
    
    std::string tmp;
    tmp.resize(20);

    bool flipper = true;

                
    for(int i = 0; i < 20; i+=2)
    {
        tmp[i] = znaki[str[i]];
        tmp[i] += znaki[str[i + 1]] * 16;
    }

    return tmp;

}

int main(void)
{

    
    std::string* str;
    uint32_t ile;

    std::cout << "ile zestawow danych: ";
    std::cin >> ile;

    str = new std::string[ile];

    for(int i = 0; i < ile; i++)
    {
        str[i].resize(20);
        std::cin >> str[i];
    }

    for(int i = 0; i < ile; i++)
        std::cout << odszyfruj(str[i]) << std::endl;

}


