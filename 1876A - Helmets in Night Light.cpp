#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,p;
	    cin>>n>>p;
	    vector<long long> a(n),b(n);
	    for(int i=0;i<n;i++) cin>>a[i];
	    for(int i=0;i<n;i++) cin>>b[i];
	    
	    priority_queue<pair<long long,long long>,vector<pair<long long,long long>>,greater<pair<long long,long long>> > pq;
	    for(int i=0;i<n;i++){
	        pq.push({b[i],a[i]});
	    }
	    long long movs = 1, cost = p;
	    while(!pq.empty() && movs<n){
	        auto tope = pq.top();
	       // cout<<tope.first<<' '<<tope.second<<endl;
	        pq.pop();
	        if(tope.first >= p) break;
	        
	        long long curr = min(n - movs,tope.second);
	        cost += (curr*1ll*tope.first);
	        movs+=curr;
	    }
	    
	    cost += (n - movs)*p;
	    cout<<cost<<endl;
	    
	}
	return 0;

}
