#include <iostream>

int stone2lb(int sts)
{
    return 14 * sts;
}

int main(int argc, char const *argv[])
{
    /* code */
    int stone;
    std::cout << "Enter the weight in stone: ";
    std::cin >> stone;
    int pounds = stone2lb(stone);
    std::cout << " stone = "; 
    std::cout << pounds << " pounds." << std::endl;
    return 0;
}
