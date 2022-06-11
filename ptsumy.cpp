
#include <iostream>
#include <algorithm>
#include <deque>

std::deque<int> result;

int find_num(int num, int target) 
{

    std::cout << num << " ";
    
    if(!target)
    {
        std::cout << std::endl;
        return num;
    }

    for(int i = num; i >= 1; i--)
    {
        if(target - i >= 0)
        {
            find_num(i , target - i);
        }
    }

    return -1;
}

int main(void)
{

    int t;
    std::cin >> t;

    for(int i = 0; i < t; i++)
    {

        int tmp;
        std::cin >> tmp;

        find_num(tmp,tmp);

            
    }

}
