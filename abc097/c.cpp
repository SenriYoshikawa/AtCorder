#include <iostream>
#include <string>
#include <set>

int main()
{
    std::string str;
    std::cin >> str;
    int k;
    std::cin >> k;

    std::set<std::string> s;
    //std::cout << "size = " << str.size() << std::endl;
    for (int i = 0; i < 26 && s.size() <= k; ++i)
    {
        for (int j = 1; j <= 5 && j <= str.size(); ++j)
        {
            for (int l = 0; j + l <= str.length(); ++l)
            {
                //std::cout << i << j << l << std::endl;
                if (str[l] == 'a' + i && l+j <= str.length()) 
                {
                    s.insert(str.substr(l, j));
                }
            }
        }
    }
    //std::cout << "size = " << s.size() << std::endl;
    auto itr = s.begin();
    for(int i = 1; i < k; ++i)
    {
        //std::cout << *itr << std::endl;
        itr++;
    }

    std::cout << *itr << std::endl;
    return 0;
}
