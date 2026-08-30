#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int english;
    int math;
    Student(string name, int roll, int english, int math)
    {
        this->name=name;
        this->roll=roll;
        this->english=english;
        this->math=math;

    }
    void total()
    {
        cout << "Total marks of " << name << " = " << english+math << endl;
    }
};
int main()
{
    Student sakib("Sakib Ahmed",23,89,98),rakib("Rakib Ahmed",25,86,78);
    sakib.total();
    rakib.total();

    return 0;
}