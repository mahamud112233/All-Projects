#include <bits/stdc++.h>
using namespace std;
void insert_heap(vector<int> &v, int val)
{
    v.push_back(val);
    int cur_idx = v.size() - 1;
    while (cur_idx != 0)
    {
        int par_ind = (cur_idx - 1) / 2;
        if (v[cur_idx] > v[par_ind])
            swap(v[par_ind], v[cur_idx]);
        else
            break;
        cur_idx = par_ind;
    }
}
void print_heap(vector<int> v)
{
    if(v.empty()) return;
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
}
void delete_heap(vector<int> &v)
{
    if(v.empty())
    {
        cout << "Heap is empty" << endl;
        return;
    }
    cout << "Delete value: " << v[0] << endl;
    if(v.size()==1)
    {
        cout << "There isn't any element" << endl;
        v.pop_back();
        return;
    }
    v[0] = v.back();
    v.pop_back();
    int cur_ind = 0;
    
    while (true)
    {
        int left_ind = cur_ind * 2 + 1;
        int right_ind = cur_ind * 2 + 2;
        int left_v = INT_MIN, right_v = INT_MIN;
        if (left_ind < v.size())
            left_v = v[left_ind];
        if (right_ind < v.size())
            right_v = v[right_ind];
        if (left_v >= right_v && left_v > v[cur_ind])
        {
            swap(v[cur_ind], v[left_ind]);
            cur_ind = left_ind;
        }
        else if (right_v > left_v && right_v > v[cur_ind])
        {
            swap(v[cur_ind], v[right_ind]);
            cur_ind = right_ind;
        }
        else
            break;
    }
}
int main()
{
    vector<int> v;
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        int val;
        cin >> val;
        insert_heap(v, val);
    }
    print_heap(v);
    delete_heap(v);
    print_heap(v);
    delete_heap(v);
    print_heap(v);
    delete_heap(v);
    print_heap(v);
    delete_heap(v);
    print_heap(v);
    delete_heap(v);
    print_heap(v);
    delete_heap(v);
    print_heap(v);
    delete_heap(v);
    print_heap(v);
    delete_heap(v);
    delete_heap(v);
    return 0;
}