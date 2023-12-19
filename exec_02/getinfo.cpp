#include <iostream>

int main(int argc, char const *argv[])
{
    /* code */
    int carrots;
    std::cout << "How many carrots do you have?" << std::endl;
    std::cin >> carrots;
    std::cout << "Here are two more.";
    carrots += 2; 
    std::cout << "Now you have " << carrots << " carrots." << std::endl;
    return 0;
}
