

#include <vector>
#include <iostream>

struct siedzienie
{
    bool zajete;
    uint32_t przez_kogo;
};

struct naukowiec
{
    bool badany;
};

uint32_t n; // liczba miejsc siedzacych
uint32_t m; // ile naukowcow

uint32_t x; // pierwsze zajete miejsce
uint32_t y; // ile naukowcow objetych badaniem

uint32_t* naukowcy;
siedzienie* miejsca;


int jak_najdalej()
{



}


void get_result()
{
    
    miejsca[n - 1].zajete = true;  



}

int main(void)
{

    std::cin >> n >> m;
    std::cin >> x;
    std::cin >> y;

    naukowcy = new uint32_t[y]; // kolejnosc jak wchodza
    miejsca = new siedzienie[n];

    for(int i = 0; i < y; i++)
        std::cin >> naukowcy[i];



}








