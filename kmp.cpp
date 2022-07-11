

#include <iostream>
#include <vector>

std::vector<int> result;


void shrink_str(std::string& str, uint32_t dest_size)
{
    for(auto it = str.begin() + dest_size ; it != str.end(); it++)
        *it = '\0';
}


void find_sstring(std::string str, std::string sub_str, uint32_t sstr_size)
{
    auto it_sub = sub_str.begin();

    bool ok;

    for(auto it = str.begin(); it != str.end(); it++)
    {
        ok = true;

        for(int i = 0; i < sstr_size; i++)  
        {
            if((*(it + i)) != (*(it_sub + i)))
                ok = false;
        }

        if(ok)
            result.push_back(it - str.begin());
    }

}

int main(void)
{

    int T; //ile testow
    int n; //dlugosc wzorca
    std::string p; // first str
    std::string t; // second str

    std::cin >> T;

    for(int i = 0; i < T; i++)
    {

        std::cin >> n;
        std::cin >> p;
        std::cin >> t;

        shrink_str(p,n);

        find_sstring(t,p,n);

    }

    for(auto a : result)
        std::cout << a << std::endl;

}
