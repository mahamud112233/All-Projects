#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int roll;
    int cls;
    double gpa;

    Student(int roll,int cls, int gpa)
    {
        //this akta built in poiter..ata object er adress rakhe
        this->roll=roll; // ba (*this).roll= roll;
        this->cls=cls;
        this->gpa=gpa;
    }
};
int main ()
{
    Student rakib(20,5,3.45),sakib(2,5,5.00);

    cout<< rakib.roll <<" " << rakib.cls <<" " << rakib.gpa << endl;
    cout<< sakib.roll <<" " << sakib.cls <<" " << sakib.gpa << endl;

    return 0;
}