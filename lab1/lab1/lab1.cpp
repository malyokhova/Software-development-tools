#include <iostream>
using namespace std;

float Sum(float, float);
float Subtraction(float, float);
float Multiplication(float, float);
float Division(float, float);
float Factorial(float);

int main()
{
    float a, b;
    int operation;

    cout << "\n Select the operation:" << endl <<
        "1 - Addition" << endl <<
        "2 - Subtraction" << endl <<
        "3 - Multiplication" << endl <<
        "4 - Division" << endl <<
        "5 - Factorial" << endl;

    cin >> operation;

    switch (operation)
    {
    case 1:
        cout << "Enter 2 numbers: " << endl;
        cin >> a >> b;
        cout << "Answer: " << Sum(a, b) << endl;
        break;
    case 2:
        cout << "Enter 2 numbers: " << endl;
        cin >> a >> b;
        cout << "Answer: " << Subtraction(a, b) << endl;
        break;
    case 3:
        cout << "Enter 2 numbers: " << endl;
        cin >> a >> b;
        cout << "Answer: " << Multiplication(a, b) << endl;
        break;
    case 4:
        cout << "Enter 2 numbers: " << endl;
        cin >> a >> b;
        if (b != 0)
        {
            cout << "Answer: " << Division(a, b) << endl;
        }
        else
        {
            cout << "Division by 0" << endl;
        }
        break;
    case 5:
        cout << "Enter number: " << endl;
        cin >> a;
        cout << "Answer: " << Factorial(a) << endl;
        break;
    default:
        cout << "There is no such operation" << endl;
    }

    return 0;
}

float Sum(float num1, float num2)
{
    return num1 + num2;
}

float Subtraction(float num1, float num2)
{
    return num1 - num2;
}

float Multiplication(float num1, float num2)
{
    return num1 * num2;
}

float Division(float num1, float num2)
{
    return num1 / num2;
}

float Factorial(float num)
{
    if (num > 1)
    {
        return num * Factorial(num - 1);
    }

    return 1;
}