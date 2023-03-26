#include <iostream>
#include <string>
using namespace std;

float MyFloor(float Number)
{
    if (Number > 0)
        return int(Number);
    else 
        return int(Number) - 1;
}

float ReadNumber ()
{
    float Number;
    cin >> Number;
    return Number;
}

int main()
{
    float Number = ReadNumber();
    cout << MyFloor(Number);
    cout << endl;
    return 0;
}