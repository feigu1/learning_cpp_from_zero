#include <iostream>

using std::cout;
using std::cin;
using std::endl;

const int DEGREE_TO_MINUTE = 60;
const int MINUTE_TO_SECOND = 60;

int main(int argc, char const *argv[])
{
    /* code */
    int degree, minute, second;
    float degree_style;
    cout << "Enter a latitude in degrees, minutes and seconds" << endl;
    cout << "First, enter the degrees: ";
    cin >> degree;
    cout << "Next, enter the minutes of arc: ";
    cin >> minute;
    cout << "Finally, enter the seconds of arc: ";
    cin >> second;
    degree_style = degree + (float)minute / DEGREE_TO_MINUTE + (float)second / (DEGREE_TO_MINUTE * MINUTE_TO_SECOND);
    cout << degree << " degrees," << minute << " mintues," << second << " seconds= "<< degree_style << " degress" <<endl;
    return 0;
}
