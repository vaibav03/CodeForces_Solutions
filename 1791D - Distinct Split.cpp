#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
	while(t--){
	    int n;
	cin>>n;
	string s;
	cin>>s;
	vector<int> pre(n),suf(n);
	set<int> ss;
	
	for(int i=0;i<n;i++){
	    ss.insert(s[i]);
	    pre[i] = ss.size();
	}
	ss.clear();
	int ans = 0;
	for(int i=n-1;i>=0;i--){
	    suf[i] = ss.size();
	    ss.insert(s[i]);
	    ans = max(ans, suf[i] + pre[i]);
	}
	
	cout<<ans<<endl;
	    
	}
    return 0 ;
}
