#include <iostream>
using namespace std;

int main ()
{
    cout << "how many points did you loose? ";
    int points;
    cin >> points;

    if (points < 2) 
    {
        cout << "You lost fewer points than me.\n";
    }
    else if (points > 2) 
    {
        cout << "You lost more points than me.\n";
    }
    else 
    {
        cout << "You lost the same amount of points as me!\n";
    }
}