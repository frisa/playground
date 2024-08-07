#include <iostream>
#include <tuple>

int main()
{
    std::cout << "Hello, World!" << std::endl;

    std::tuple<int, float, double> t(1, 2.0, 3.0);
    std::cout << std::get<0>(t) << std::endl;
    std::cout << std::get<1>(t) << std::endl;

    return 0;
}