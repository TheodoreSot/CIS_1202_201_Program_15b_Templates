// Theodore Sotirelis
//CIS 1202 201
//December 3, 2023

#include <iostream>
#include <cmath>
using namespace std;

//templated function taking half of variable
template <typename T>
T half(T num)
{
    T halfNum=(num/2);
    return halfNum;
}

//specialized templated function for taking half of int. (Specified in instructions)
template <>
int half<int>(int num)
{
    int roundedNum;
    roundedNum=round((static_cast<double>(num)/2));
    return roundedNum;
}

int main()
{
    double a=7.0;
    float b=5.0f;
    int c=3;
    
    cout << half(a) << endl;    // calls general templated function
    cout << half(b) << endl;    // calls general templated function
    cout << half(c) << endl;    // calls specialized templated function

    return 0;
}
