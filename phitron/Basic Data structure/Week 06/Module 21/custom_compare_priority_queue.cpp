#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string s;
    int roll;
    int mark;
    Student(string s, int roll, int mark)
    {
        this->s = s;
        this->roll = roll;
        this->mark = mark;
    }
};
class cpm
{
public:
    bool operator()(Student l, Student r)
    {
        if (l.mark < r.mark)
        {
            return true;
        }
        else if (l.mark > r.mark)
        {
            return false;
        }
        else
        {
            return l.roll > r.roll;
        }
    }
};
int main()
{
    priority_queue<Student, vector<Student>, cpm> pq;
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        int roll, mark;
        cin >> s >> roll >> mark;
        Student ob(s, roll, mark);
        pq.push(ob);
    }
    while (!pq.empty())
    {
        cout << pq.top().s << " " << pq.top().roll << " " << pq.top().mark << endl;
        pq.pop();
    }
    return 0;
}