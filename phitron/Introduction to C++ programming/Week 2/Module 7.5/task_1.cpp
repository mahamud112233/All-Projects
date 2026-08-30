#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
bool fun(Student l, Student r)
{
    if (l.marks == r.marks)
    {
        return l.roll < r.roll;
    }
    else
    {
        return l.marks > r.marks;
    }
}
int main()
{
    int a;
    cin >> a;

    Student *arr = new Student[a];
    for (int j = 0; j < a; j++)
    {
        cin >> arr[j].name >> arr[j].roll >> arr[j].marks;
    }
    sort(arr, arr + a, fun);
    for (int j = 0; j < a; j++)
    {
        cout << arr[j].name << " " << arr[j].roll << " " << arr[j].marks << endl;
    }

    return 0;
}