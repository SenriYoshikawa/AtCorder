    #include <iostream>
    #include <algorithm>
    #include <cmath>

    int main()
    {
        int a, b, c, k;
        std::cin >> a >> b >> c >> k;
        std::cout << a + b + c + (std::pow(2, k) - 1) * std::max(a, std::max(b, c)) << std::endl;
        return 0;
    }