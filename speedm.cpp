
#include <queue>
#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <unordered_map>

std::vector<int32_t> result;
std::unordered_map<int32_t,int32_t> memorizer;

int32_t get_lowest_possible(int32_t num, std::deque<int32_t> speed)
{

    if(memorizer.count(num))
        return memorizer[num];

    result.push_back(num);

    if(!num)
        return num;

    for(auto a : speed ) 
    {
        speed.pop_front();

        if(abs(get_lowest_possible(num - a, speed)) < abs(get_lowest_possible(num + a, speed)))
        {
            memorizer.insert({num, num - a});
            return get_lowest_possible(num - a, speed);
        }

        else
        {
            memorizer.insert({num, num - a});
            return get_lowest_possible(num + a, speed);
        }
    }

    return num;

}

int main(void)
{

    std::deque<int32_t> speed;

    int32_t data_number;
    std::cin >> data_number;


    for(int i = 0; i < data_number; i++)
    {
        int32_t tmp;
        std::cin >> tmp;
        speed.push_back(tmp); 
    }

    int32_t tmp = speed[0];
    speed.pop_front();

    get_lowest_possible(tmp, speed);

    for(auto& a : result)
        a = abs(a); 

    std::make_heap(result.begin(), result.end(), std::greater<int32_t>{});

    std::cout << "final result: " << result[0] << std::endl;


}
