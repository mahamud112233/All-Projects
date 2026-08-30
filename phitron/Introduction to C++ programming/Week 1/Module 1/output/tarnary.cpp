#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    // if(a%2==0)
    // {
    //     cout <<"Even number \n";
    // }
    // else{
    //     cout<< "Odd number \n";
    // }
    // tarnary holo condition dia true(if) akta kaj ba false(else) holeo akta kaj korbe.
    a % 2 == 0 ? cout << "Even number \n" : cout << "Odd numner \n";
    return 0;
}