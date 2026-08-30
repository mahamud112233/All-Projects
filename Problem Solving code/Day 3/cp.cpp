class Solution {
public:
    string removeDuplicates(string s) {
        string s1;
        int arr[26] = {0,0};
        for(int i=0;i<s.size();i++)
        {
            arr[(int)(s[i]-'a')]++;
        }
        vector<int> v(arr,arr+26);
        for(int i=0;i<s.size();i++)
        {
            if(arr[(int)(s[i]-'a')]==1)
            {
                s1.push_back(s[i]);
            }
            else if(v[(int)(s[i]-'a')]>1 && v[(int)(s[i]-'a')]%2==1)
            {
                arr[(int)(s[i]-'a')]--;
            }
        }
        return s1;
    }
};