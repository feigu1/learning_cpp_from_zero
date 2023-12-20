#include <iostream>
#include <climits>
#define ZERO 0

int main(int argc, char const *argv[])
{
    /* code */
    short sam = SHRT_MAX;
    unsigned short sue = sam;
    std::cout << "sam has " << sam << " dollars and sue has " << sue;
    std::cout << " dollars deposited." << std::endl << "Add $1 to each account." << std::endl << "Now "; 
    sam += 1;
    sue += 1;
    std::cout << "Sam has "  << sam << " dollars and Sue has " << sue;
    std::cout << " dollars deposited.\nPoor Sam!" << std::endl;
    sam = ZERO;
    sue = ZERO;
    std::cout << "sam has " << sam << " dollars and sue has " << sue;
    std::cout << " dollars deposited." << std::endl << "Take $1 to each account." << std::endl << "Now ";
    sam -= 1;
    sue -= 1;
    std::cout << "sam has " << sam << " dollars and sue has " << sue;
    std::cout << " dollars deposited.\nLucky Sue!" << std::endl;
    return 0;
}
