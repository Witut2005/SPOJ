

//https://pl.spoj.com/problems/MWPZ06Z/

#include <iostream>

static inline bool czy_rowno(uint32_t x, uint32_t y)
{
    return y % x == 0;
}

const char* stan[] = {{"NIE"}, {"TAK"}};

int main(void)
{

    uint32_t ile_danych, osoby, upominki;

    std::cout << "liczba zestawów danych: ";
    std::cin >> ile_danych;



    for(int i = 0; i < ile_danych; i++)
    {
        std::cin >> osoby >> upominki;
        std::cout << stan[czy_rowno(osoby, upominki)] << std::endl;
    }
    


}
