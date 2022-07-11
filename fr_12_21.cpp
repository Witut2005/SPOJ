
#include <bits/stdc++.h>

int number_len(uint32_t x)
{

    int tmp = 0;

    if(!x)
        return 1;

    while(x)
    {
        tmp++;
        x = x / 10;
    }
    return pow(10, tmp - 1);

}

int main(void)
{
    
    int first[2], second[2];

    std::cin >> first[0] >> first[1];
    std::cin >> second[0] >> second[1];


    first[0] = first[0] * (10 * number_len(first[1]));
    second[0] *= 10 * number_len(second[1]);

    first[0] += first[1];
    second[0] += second[1];
    first[0] += second[0];

    std::cout << first[0] << std::endl;

}
