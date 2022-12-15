#include <iostream>
using namespace std;

int main ()
{
    int num1, num2;
    int sum;
    string sut = "alexander lugter \n";
    cout << sut;
    cout << "type a number: ";
    cin >> num1;
    cout << "type another number: ";
    cin >> num2;
    sum = num1 + num2;
    cout << "Sum is: " << sum;
}