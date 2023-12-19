#include <iostream>
#include <cmath>

int main(int argc, char const *argv[])
{
    /* code */
    double area;
    std::cout << "Enter the floor area , in square feet, of your home: " << std::endl;
    std::cin >>area;
    double side;
    side = sqrt(area);
    std::cout << "That's the equivalent of a square " << side << " feet to the side." <<std::endl;    
    return 0;
}
 