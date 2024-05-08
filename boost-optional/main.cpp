#include <iostream>

#include <boost/optional.hpp>
#include <boost/optional/optional_io.hpp>

boost::optional<int> sqrt(int x) {
    if (x < 0)
        return boost::optional<int>();

    return x*x;
}

int main()
{
    std::cout << sqrt(1) << std::endl;
    std::cout << sqrt(-1) << std::endl;

    return 0;
}
