#include <iostream>
using namespace std;

static bool isOperationValid = true;

int addition (int a, int b)
{
    return a+b;
}

int subtraction (int a, int b)
{
    return a-b;
}

int multiplication (int a, int b)
{
    return a*b;
}

int divison (int a, int b)
{
    int res=0;
    if (b == 0)
        isOperationValid = false;
    else 
    {
        res = a / b;
        if (a % b != 0)
            res *= 1.0; 
    }
    return a/b;
}

int Calculator(int a, char op, int b)
{
    int result=0;
    if (op == '+')
        result = addition(a,b);
    else if (op == '-')
        result = subtraction(a,b);
    else if (op == '*')
        result = multiplication(a,b);
    else if (op == '/')
        result = divison(a,b);
    else
        isOperationValid = false;
    return result;
}


int main()
{
    cout << "Hello! Welcome to C++ basic calculator\n";

    int a, b;
    char op;

    cout << "Enter the first integer: ";
    cin >> a;
    cout << "Enter the operation type (+, -, *, /): ";
    cin >> op;
    cout << "Enter the second integer: ";
    cin >> b;

    if (isOperationValid)
        cout << "The result is " << Calculator(a, op, b) << endl;
    else
        cout << "ERROR! The operation is not valid.\n";

    return 0;
}