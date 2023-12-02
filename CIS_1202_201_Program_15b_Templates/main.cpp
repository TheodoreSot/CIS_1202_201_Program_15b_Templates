#include <iostream>
#include <cmath>
using namespace std;

template <typename T>
T half(T num)
{
    T halfNum=(num/2);
    return halfNum;
}

//template <typename T>
int half(int num)
{
    int roundedNum;
    double tempNum=static_cast<double>(num)/2;
    roundedNum=round(static_cast<double>(tempNum));
    return roundedNum;
    
}

int main()
{
    double a=7.0;
    float b=5.0f;
    int c=3;
    
    cout << half(a) << endl;
    cout << half(b) << endl;
    cout << half(c) << endl;

    return 0;
}
