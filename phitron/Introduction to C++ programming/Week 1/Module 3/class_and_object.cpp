#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    char section;
    double gpa;
};
int main()
{
    Student a, b;
    cin.getline(a.name, 100);
    cin >> a.roll >> a.section >> a.gpa;
    cin.ignore();
    cin.getline(b.name, 100);
    cin >> b.roll >> b.section >> b.gpa;

    cout << a.name << " " << a.roll << " " << a.section << " " << a.gpa << endl;
    cout << b.name << " " << b.roll << " " << b.section << " " << b.gpa << endl;

    return 0;
}