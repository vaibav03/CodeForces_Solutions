#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    vector<int> nums(n);
	    for(int i=0;i<n;i++) cin>>nums[i];
	    
	    int ans{}, upLim = nums[0] + x, lowLim = nums[0] - x;
	    for(int i=1;i<n;i++){
	        if( ( upLim < nums[i] - x ) || (lowLim > nums[i] + x) ) {ans++; lowLim = nums[i] - x;  upLim = nums[i] + x; }
	        else{
	            upLim = min(upLim, nums[i] + x );
	            lowLim = max(lowLim , nums[i] - x);
	        }
	        
	    }
	    cout<<ans<<endl;
	    
	}
	return 0;
}
