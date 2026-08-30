#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};
bool func(Student l, Student r)
{
    if (l.eng_marks == r.eng_marks)
    {
        if (l.math_marks == r.math_marks)
        {
            return l.id < r.id;
        }
        else
        {
            return l.math_marks > r.math_marks;
        }
    }
    else
    {
        return (l.eng_marks > r.eng_marks);
    }
}

int main()
{
    int a;
    cin >> a;
    Student arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i].nm >> arr[i].cls >> arr[i].s >> arr[i].id >> arr[i].math_marks >> arr[i].eng_marks;
    }
    sort(arr, arr + a, func);

    for (int i = 0; i < a; i++)
    {
        cout << arr[i].nm << " " << arr[i].cls << " " << arr[i].s << " " << arr[i].id << " " << arr[i].math_marks << " " << arr[i].eng_marks << endl;
    }
    return 0;
}