
#include <deque>
#include <iostream>

int nwd(int x, int y)
{

    while(x != y)
    {
        if(x < y)
            y = y -x;
        else if(x > y)
            x = x - y;
    }

    return x;

}

int nww(int num, std::deque<int> arr)
{

    for(auto a : arr)
    {

        int nww_tmp = (num * a) / nwd(num, a);
        arr.pop_front();
        return nww(nww_tmp, arr);

    }

    return num;

}

int main(void)
{

    int liczba_testow, n;
    std::deque<int> arr;

    std::cin >> liczba_testow;
    int* wyniki = new int[liczba_testow];

    for(int i = 0; i <liczba_testow; i++)
    {

        std::cin >> n;

        for(int j = 0; j < n; j++)
        {
            int tmp;
            std::cin >> tmp; 
            arr.push_back(tmp);
        }

        int tmp = arr[0];
        arr.pop_front();
        wyniki[i] = nww(tmp, arr); 
        arr.clear();

    }

    std::cout << "results:" << std::endl;

    for(int i = 0; i < liczba_testow; i++)
    {
        std::cout << wyniki[i] << std::endl; 
    }



}
