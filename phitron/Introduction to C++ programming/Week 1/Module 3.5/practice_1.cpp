#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    char section;
    int math_marks;
    int cls;

    Student(char name[], int roll, char section, int math_marks, int cls)
    {
        strcpy(this->name, name);
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};

int main()
{
    Student rakib("rakib", 20, 'C', 86, 5);
    Student sakib("sakib", 21, 'C', 89, 5);
    Student akib("akib", 22, 'C', 80, 5);

    // cout << rakib.name << " " << rakib.roll << " " << rakib.section << " " << rakib.math_marks << " " << rakib.cls << endl;
    // cout << sakib.name << " " << sakib.roll << " " << sakib.section << " " << sakib.math_marks << " " << sakib.cls << endl;
    // cout << akib.name << " " << akib.roll << " " << akib.section << " " << akib.math_marks << " " << akib.cls << endl;

    if(rakib.math_marks > sakib.math_marks && rakib.math_marks > akib.math_marks)
    {
        cout <<"Rakib got the best marks:" << rakib.math_marks <<endl;
    }
    else if(sakib.math_marks > rakib.math_marks && sakib.math_marks > akib.math_marks)
    {
        cout <<"Sakib got the best marks:" << sakib.math_marks <<endl;
    }
    if(akib.math_marks > sakib.math_marks && akib.math_marks > rakib.math_marks)
    {
        cout <<"Akib got the best marks:" << akib.math_marks <<endl;
    }
    return 0;
}
