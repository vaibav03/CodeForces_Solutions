#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k,a,b;
    cin>>n>>a>>b>>k;
    string s;
    cin>>s;
    int cnt{};
    vector<int> ans;
    for(int i=0;i<s.size();i++){
        if(s[i] == '0') cnt++;
        else cnt = 0;
        
        if(cnt == b){ cnt = 0; ans.push_back(i);}
    }
    
    cout<<max((int)ans.size() - a + 1,0)<<endl;

    
    
    for(int i=0;i<=(int)ans.size() - a;i++){ cout<<ans[i]+1<<' ';}
    
    
    return 0;
}
