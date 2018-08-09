#include <iostream>
using namespace std;

class Calculator
{
  public:
    int Calculate(int x, int y, char oper)
    {
        switch(oper)
        {
        case ('+'):
            return x + y;
        case ('-'):
            return x - y;
        case ('*'):
            return x * y;
        case ('/'):
        {
            if (y != 0)
                return x / y;
            else
                cout << "division by zero!\n";
        }
        default:
            cout << "no such operation!\n";
            return 0;
        }
    }
};

class Animal{

};

int main(){
    int x, y, result;
    cout << "Hello, im Calculator!\n";
    char oper;
    Calculator c;
    cin >> x >> oper >> y;
    result = c.Calculate(x,y, oper);
    cout << "Result is " << result << endl;

    cin.ignore();
    cin.get();
}