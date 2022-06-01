
//https://pl.spoj.com/problems/TPERM2/

#include <algorithm>
#include <iostream>

#define TEST_MAX 100
#define K_MAX 10


int main(void)
{

    std::string str;
    uint32_t test_num;
    uint16_t* k;

    std::cout << "podaj liczbe testow: ";
    std::cin >> test_num;
    
    if(test_num >= TEST_MAX)
    {
        std::cout << "ERROR test_num must be less than 100" << std::endl;
        exit(1);
    }

    k = new uint16_t[test_num];
    
    for(int i = 0; i < test_num; i++)
    {
        std::cin >> k[i];
        if(k[i] >= 10)
        {
            std::cout << "ERROR k must be lest than 10" << std::endl;
            exit(1);
        }
    }
    
    for(int i = 0; i < test_num; i++)
    {
        str.resize(k[i]);
        
        for(int j = 0; j < k[i]; j++)
            str[j] = 'a' + j;          

        do
        {            
            std::cout << str << std::endl;
        }while(std::next_permutation(str.begin(), str.end(), std::less<char>()));

        std::cout << "----------------------" << std::endl;

    }

}

