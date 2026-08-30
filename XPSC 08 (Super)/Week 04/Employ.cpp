#include <bits/stdc++.h>
using namespace std;
class Rafi
{
    string name;
    int basicSalary;

public:
    void rafi()
    {

        cin >> name >> basicSalary;
    }
    void display()
    {
        cout << name << ' ' << basicSalary << '\n';
    }
};
int main()
{
    int n;
    cin >> n;
    Rafi arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i].rafi();
    }
    for(int i=0;i<n;i++)
    {
        arr[i].display();
    }

    return 0;
}