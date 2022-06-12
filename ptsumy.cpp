
#include <iostream>
#include <algorithm>
#include <deque>


int find_num(int num, int target, std::deque<int> result) 
{

    result.push_back(num);
    
    if(!target)
    {
    
        for(auto it = result.begin() + 1; it != result.end(); it++)
            std::cout << *it << " ";

        std::cout << std::endl;

        return num;
    }

    for(int i = num; i >= 1; i--)
    {

        if(target - i >= 0)
        {
            find_num(i , target - i, result);
        }
    }

    return -1;
}

int main(void)
{

    int t;
    std::deque<int> result;
    std::cin >> t;

    for(int i = 0; i < t; i++)
    {

        int tmp;
        std::cin >> tmp;

        find_num(tmp,tmp,result);

            
    }

}
