#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int r, int c, int g)
    {
        roll = r;
        cls = c;
        gpa = g;
    }
};
Student fun()
{
    Student sakib(2, 5, 5.00);
    return sakib; 
}
int main()
{
    //Student rakib(20, 5, 3.45);
    Student temp= fun();
    //cout << rakib.roll << " " << rakib.cls << " " << rakib.gpa << endl;
    cout << temp.roll << " " << temp.cls << " " << temp.gpa << endl;

    return 0;
}