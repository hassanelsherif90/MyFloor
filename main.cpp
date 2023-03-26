#include <iostream>
#include <string>
using namespace std;


float GetRefactoinPart (float Number)
{
    return Number - int (Number);
}

float MyFloor(float Number)
{
    int IntPart;
    IntPart = int(Number);
    float factoinPart = GetRefactoinPart(Number);

    if (abs(factoinPart) >= .5)
    {
        if (Number > 0)
        {
            return IntPart;
        } 
        else 
        {
            return --IntPart;
        }
    }
    else 
    {
        if (Number > 0)
        {
            return IntPart;
        } 
        else 
        {
            return --IntPart;
        }
    }
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