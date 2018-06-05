#include <iostream>
#include <cmath>
#include <vector>
#include <bitset>

int main()
{
    std::vector<int> v(1001,0);
    std::bitset<1001> b(0);
    for(int i = 1; i <= 1000; ++i)
    {
        for(int j = 2; j <= 1000 && std::pow(i, j) <= 1000; ++j)
        {
            b.set(std::pow(i, j));
        }
    }
    
    int x;
    std::cin >> x;
    for(int i = x; x > 0; --i)
    {
        if(b[i] != 0)
        {
            std::cout << i << std::endl;
            break;
        }
    }
    
    return 0;
}