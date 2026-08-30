class Solution {
public:
bool check(int sr,vector<vector<int>>& rooms)
{
    bool vis[1000];
    memset(vis,false,sizeof(vis));
    queue<int> q;
    q.push(sr);
    vis[sr]=true;
    while(!q.empty())
    {
        int par=q.front();
        q.pop();
        for(int child:rooms[par])
        {
            if(!vis[child])
            {
                q.push(child);
                vis[child]=true;
            }
        }
    }
    for(int i=0;i<rooms.size();i++)
    {
        if(vis[i]==false)
        {
            return false;
        }
    }
    return true;
}
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        return check(0,rooms);
    }
};