#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;
    std::cout << (a <= b ? a : a - 1) << std::endl;
    return 0;
}
