
//https://pl.spoj.com/problems/ODWROTNO/
//(n * m) % p = 1

#include <iostream>

uint64_t szukaj(uint64_t p, uint64_t n)
{

    uint64_t m = 0;

    while( ! ((n * m) % p == 1))
    {
        m++;
    }
    return m;

}

int main(void)
{

    uint16_t ile_zestawow;
    uint64_t n,p;
    uint64_t* wyjscie;

    std::cout << "ile zestawow: ";
    std::cin >> ile_zestawow;

    wyjscie = new uint64_t[ile_zestawow];

    for(int i = 0; i < ile_zestawow; i++)
    {
        std::cin >> p >> n;
        wyjscie[i] = szukaj(p, n);
    }

    for(int i = 0; i < ile_zestawow; i++)
    {
        std::cout << wyjscie[i] << std::endl;
    }
}


