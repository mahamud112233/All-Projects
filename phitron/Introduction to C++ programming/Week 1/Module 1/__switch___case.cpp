#include <iostream>
using namespace std;
int main()
{
    // switch case if er moto kaj kore..kintu case a condition == dia check kore
    // and porer case gula auto trur kore tai seta thame break use korte hoy.
    int a;
    cin >> a;
    switch (a) // condition
    {
    case 1: // == possible value
        cout << "Saturday\n";
        break;
    case 2:
        cout << "Sunday\n";
        break;
    case 3:
        cout << "Monday\n";
        break;
    case 4:
        cout << "Tuesday\n";
        break;
    case 5:
        cout << "Wednesday\n";
        break;
    case 6:
        cout << "Thursday\n";
        break;
    case 7:
        cout << "Friday\n";
        break;
    default:
        cout<< "Worng Input\n";
    }
    return 0;
}
