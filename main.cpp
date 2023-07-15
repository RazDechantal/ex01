#include <iostream>

using namespace std;

int add(int a, int b)
{
    return a + b;
}

int readNumber()
{
    int a{};
    cin >> a;
    return a;
}

int main()
{
    cout << "Enter an integer: " << endl;
    int a = readNumber();

    cout << "Enter another integer: " << endl;
    int b = readNumber();

    cout << "The sum is: " << add(a, b) << endl;

    return 0;
}