
#include <iostream>
#include <fstream>
#include <cstring>

bool in_comment = false;

bool find_single_comment(std::string::iterator iter)
{
    return *iter == '/' && *(iter + 1)== '/';
}

bool find_multiple_comment(std::string::iterator& iter)
{
    
    if(*iter == '/' && *(iter + 1)== '*')
    {
        in_comment = true;
        iter++;
    }

    else if(*iter == '*' && *(iter + 1) == '/')
    {
        in_comment = false;
        iter++;
        *iter = ' ';
    }
    

    return in_comment;

}

int main(int argc, char* argv[])
{

    std::fstream file;
    file.open(argv[1], std::ios::out | std::ios::in);

    std::string str;
    std::string::iterator it;

    while(!file.eof())
    {

        getline(file, str); 

        it = str.begin();
        

        while(it != str.end())
        {
            if(find_single_comment(it) == true)
                break;

            if(find_multiple_comment(it) == false)
                std::cout << *it;
            it++;
        }


        std::cout << std::endl;


    }

}
