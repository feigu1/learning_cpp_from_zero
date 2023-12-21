#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
    /* code */
    cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
    float tub = 10.0 / 3.0;
    double mint = 10.0 / 3.0;
    const float million = 1.0e6;

    cout << "tub = " << tub;
    cout << ", a million tubs = " << million * tub;
    cout << ",\nand ten million tubs = ";
    cout << 10 * million * tub << endl;

    cout << "mint = " << mint;
    cout << ", a million mints = " << million * mint;
    cout << ",\nand ten million tubs = ";
    cout << 10 * million * mint << endl;
    return 0;
}
