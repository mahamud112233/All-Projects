#include<iostream>
using namespace std;
int main()
{
    int a;
    char string[1000];
    cin>> a;
    cin.ignore();// Enter ignore korar jnno or akta input k ignore kora.
    cin.getline(string,1000);
    cout << a << endl << string;
    return 0;
}