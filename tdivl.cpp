
#include <iostream>
#include <algorithm>

class big_t
{

    public:

    char* num;
    int size;

    big_t(std::string str)
    {
        num = new char [256];

        for(int i = 0; i < 256; i++)
            num[i] = '\0';

        int index = 0;

        for(auto it = str.begin(); it != str.end(); it++, index++)
        {
            num[index] = *it;
        }

    }


    void shrink()
    {

        for(int i = 0; i < 256; i++)
        {
            if(num[i] < '0' || num[i] > '9')
                num[i] = '\0';
        }

    }

    char* operator + (big_t num2)
    {
        for(int i = 0; i < 256; i++)
        {

            if(num[i] != '\0');
                num[i] = num[i] + num2.num[i] - '0';
            
            if(num[i] > '9')
            {
                num[i + 1] = num[i + 1] + 1;
                num[i] = num[i] - '0';
            }
        
        }
        shrink();
        return num;
    }

    char* operator + (char* num2)
    {
        for(int i = 0; i < 256; i++)
        {

            if(num[i] != '\0');
                num[i] = num[i] + num2[i] - '0';
            
            if(num[i] > '9')
            {
                num[i + 1] = num[i + 1] + 1;
                char tmp = num[i] - '9';
                num[i] = '0' + tmp;
            }
        
        }
        shrink();
        return num;
    }

    char* operator * (uint32_t mul)
    {
        for(int i = 2; i <= mul; i++)
        {
            this->num = *this + num;        
        }
        return num;
    }

};


int main(void)
{

    std::string str, str2;
    std::cin >> str;
    std::cin >> str2;

    big_t num = str;
    big_t num2 = str2;

    num * 2;

    std::cout << "wynik: ";
    std::cout << num.num << std::endl;

}
