
#include <type_traits>
#include <iostream>
#include <algorithm>


template <class ... o>
void test(o ... x)
{


    auto t = std::make_tuple(x ...);

    std::cout << typeid(t).name() << std::endl;
    std::cout << std::get<4>(t) << std::endl;



}


int main(void)
{


    test(1,2,4,513,5.2);


}
