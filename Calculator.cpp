#include <iostream>
using namespace std;

// Display of operations
void display()
{
    cout << "SIMPLE CALCULATOR" << endl;
    cout << "1.ADD" << endl;
    cout << "2.Subtract" << endl;
    cout << "3.Multiply" << endl;
    cout << "4.Divide" << endl;
    cout << "5.Exit" << endl;
}

// Arithmetic operation functions
double addition(double a, double b)
{
    return a + b;
}
double subtraction(double a, double b)
    return a - b;
}
double multiplication(double a, double b)
{
    return a * b;
}
double division(double a, double b)
{
    if (b == 0)
    {
        cout << "math error" << endl;
        return 0;
    }
    else
    {
        return a / b;
    }
}

int main()
{
    double a, b;
    int choice;

    while (true)
    {

        display();
        cout << "select any operation from 1-5" << endl;
        cin >> choice;

        if (choice < 1 || choice > 5)
        {
            cout << "error, try again" << endl;
            continue;
        }

        else if (choice == 5)
        {
            cout << "I'll stop calculating now.Have a great day!" << endl;
            break;
        }
        else
        {
            cout << "enter first number" << endl;
            cin >> a;
            cout << "enter second number" << endl;
            cin >> b;

            switch (choice)
            {
            case 1:
                cout << "Result: " << addition(a, b) << endl;
                break;
            case 2:
                cout << "Result: " << subtraction(a, b) << endl;
                break;
            case 3:
                cout << "Result: " << multiplication(a, b) << endl;
                break;
            case 4:
                cout << "Result: " << division(a, b) << endl;
                break;
            }
        }
    }
    return 0;
}
