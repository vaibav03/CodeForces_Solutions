#include <bits/stdc++.h>
using namespace std;

int main() {

	    int n,d;
	    cin>>n>>d;
	    vector<int> nums(n);
	    for(int i=0;i<n;i++) cin>>nums[i];
	    
	    int ans{},avai = n;
	    
	    sort(nums.begin(),nums.end());
	    
	    for(int i=n-1;i>=0;i--){
	        int needed = ceil( (d+1)/(nums[i]*1.0) );

	        if(avai >= needed){ ans++; avai-=needed; }
	        else{ break; }
	    }
	    
	    
	    cout<<ans<<endl;
	    
	return 0;
}
