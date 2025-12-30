#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	   int n,r,b;
	   cin>>n>>r>>b;
	   
	   string ans = "";
	   int maxi = ceil(r / ((b+1)*1.0) ), mini = r / (b+1);
	   string cei = "",fl = "";
	   while(maxi --){
	       cei+='R';
	   }
	   while(mini --){
	       fl+='R';
	   }
	   int rem = r%(b+1);
	   while(rem--){
	       ans += cei;
	       ans+='B';
	   }
	   while(ans.length() < n){
	       ans+= fl;
	       ans+='B';
	   }
	   ans.pop_back();
	   cout<<ans<<endl;
	}
	return 0;
}
