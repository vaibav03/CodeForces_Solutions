#include <bits/stdc++.h>
using namespace std;

int main(){
  int n , m ,k;
  cin>>n>>m>>k;
  vector<vector<int>> adj(n+1);
  for(int i=0;i<m;i++){
    int u , v;
    cin>>u>>v;
    u--;
    v--;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  map<int, vector<int>> mp;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    mp[x-1].push_back(i);
  }
  vector<bool> visited(n+1 , false);
  vector<int> dist(n+1 , 1e9);
  dist[0] = 0;
  queue<int> q;
  q.push(0);
  visited[0] = true;
  while(!q.empty()){
    int node = q.front();
    q.pop();
    for(auto child : adj[node]){
      if(!visited[child]){
        visited[child] = true;
        dist[child] = min(dist[child] , dist[node] + 1);
        q.push(child);
      }
    }
  }
 vector<int> ans;
  for(int i=0;i<k;i++){
    int mini = 1e9, idx = -1;
    for(auto x : mp[i]){
      if(mini > dist[x]){
        mini = dist[x];
        idx = x;
      }
    }
    ans.push_back(idx + 1);
  }
  for(auto x : ans){
    cout<<x<<" ";
  }
  cout<<endl;
  return 0;
}