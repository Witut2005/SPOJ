

#include <stdint.h>
#include <iostream>


bool czy_pierwsza(uint64_t liczba)
{

    uint8_t counter = 0;

    for(int i = 1; i < liczba; i++)
    {
        if(!(liczba % i))
        {
            counter++;    
        }
    }

    if(counter == 1)
        return true;
    else
        return false;

}

int main(void)
{

    uint16_t ile_zestawow;
    uint64_t start, end;
    std::cin >> ile_zestawow;

    for(int i = 0; i < ile_zestawow; i++)
    {
        std::cin >> start >> end;

        for(int i = start; i < end; i++)
        {
            if(czy_pierwsza(i))
                std::cout << i << " ";
        }
        std::cout << std::endl;
        std::cout << "------------------" << std::endl;

    }


}
