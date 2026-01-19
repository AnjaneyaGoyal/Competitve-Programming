#include<bits/stdc++.h>
using namespace std;

bool reachedgoal(pair<int,int> p,int x,int y){
    if(p.first!=x)return false;
    if(p.second!=y)return false;
    return true;
}

int main(){
    int x0,y0,x1,y1;
    cin>>x0>>y0>>x1>>y1;
    int t;
    cin>>t;
    unordered_map<int,unordered_set<int>>mp;
    while(t--){
        int r,x,y;
        cin>>r>>x>>y;
        for(int i=x;i<=y;i++){
            mp[r].insert(i);
        }
    }
    set<pair<int,int>>visited;
    queue<pair<pair<int,int>,int>>next_visit;
    visited.insert({x0,y0});
    next_visit.push({{x0,y0},0});
    int ans=-1;
    while(!next_visit.empty()){
        pair<int,int>curr_node=next_visit.front().first;
        int d=next_visit.front().second;
        next_visit.pop();
        if(reachedgoal(curr_node,x1,y1)){
            ans=d;
            break;
        }
        int a[]={-1,1,0,0,1,-1,-1,1};
        int b[]={-1,1,1,-1,-1,1,0,0};
        for(int i=0;i<8;i++){
            pair<int,int> newpos={curr_node.first+a[i],curr_node.second+b[i]};
            if(mp[newpos.first].count(newpos.second) && !visited.count(newpos)){
                next_visit.push({newpos,d+1});
                visited.insert(newpos);
            }
        }
    }
    cout<<ans<<"\n";


    return 0;
}