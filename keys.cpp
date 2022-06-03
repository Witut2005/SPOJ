#include <iterator> 
#include <list>
#include <iostream>
#include <vector>

struct Sejf
{
    uint32_t liczba_kluczy;
    uint32_t* klucze_do_sejfow;
    bool otwarty;
};

std::vector<Sejf> sejfy;

uint32_t wynik = 0;

void otworz_sejf(std::vector<Sejf>::iterator aktualny_sejf)
{

    if(!aktualny_sejf->otwarty)
        wynik++;

    for(int i = 0; i < aktualny_sejf->liczba_kluczy; i++)
        sejfy.begin()[aktualny_sejf->klucze_do_sejfow[i] - 1].otwarty = true;
    
}

int main(void)
{


    uint32_t liczba_sejfow;

    std::cout << "ile sejfow: ";
    std::cin >> liczba_sejfow;
    for(int i = 0; i < liczba_sejfow; i++)
    {  
        sejfy.push_back({0x0, 0x0, false});
    }

    std::vector<Sejf>::iterator it = sejfy.begin();

    for(auto i = it; i != sejfy.end(); i++)
    {

        std::cin >> i->liczba_kluczy;
        i->klucze_do_sejfow = new uint32_t [i->liczba_kluczy];

        for(int j = 0; j < i ->liczba_kluczy; j++)
        {
            std::cout << "klucz" << j + 1 << " ";
            std::cin >> i->klucze_do_sejfow[j];
        }
    }

    while(it != sejfy.end())
    {
       otworz_sejf(it);
       it++;
    }

    std::cout << "WYNIK:" << std::endl;
    std::cout << wynik << std::endl;


}
