
#include <iostream>
#include <vector>

struct Podpowiedz
{

    char _operator;
    uint32_t liczba;
    std::string stan_str;
    bool stan;

}*podpowiedzi;

int ile_podpowiedzi;

std::vector<uint32_t> liczby;

bool czy_istnieje_liczba()
{
    liczby.reserve(1000000000);

    for(int i = 0; i < ile_podpowiedzi; i++)
    {
    
        switch(podpowiedzi[i]._operator)
        {
            case '<':
            {
                if(podpowiedzi[i].stan)
                {
                    for(uint32_t i = 0; i < podpowiedzi[i].liczba; i++)  
                    {
                        liczby.push_back(i);
                    }
                }

                else
                {
                    for(uint32_t i = podpowiedzi[i].liczba; i < 1000000000; i++)
                    {
                        liczby.push_back(i);
                    }   
                }

                break;
            }

        
        }

    }

}

int main(void)
{

    

    std::cout << "ile podpowiedzi: ";
    std::cin >> ile_podpowiedzi;

    podpowiedzi = new Podpowiedz[ile_podpowiedzi];

    for(int i = 0; i < ile_podpowiedzi; i++)
        std::cin >> podpowiedzi[i]._operator >> podpowiedzi[i].liczba >> podpowiedzi[i].stan_str; 


    for(int i = 0; i < ile_podpowiedzi; i++)
    {
        
        if(podpowiedzi[i].stan_str == "tak")
            podpowiedzi[i].stan = true;
        else if(podpowiedzi[i].stan_str == "nie")
            podpowiedzi[i].stan = false;

    }

    czy_istnieje_liczba();


            
}

        

