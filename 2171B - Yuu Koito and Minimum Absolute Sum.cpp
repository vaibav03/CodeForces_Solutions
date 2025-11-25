#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> v;
	    int it = n;
	    while(it--){
	        int x;
	        cin>>x;
	        v.push_back(x);
	    }
	    
	    for(int i=1;i<n-1;i++){
	        if(v[i] == -1) v[i] = 0;
	    }
	    
	    if(v[0] == -1 && v[n-1] == -1) {
	        v[0] = 0;
	        v[n-1] = 0;
	    }else if(v[0] == -1){
	        v[0] = v[n-1];
	    }else if(v[n-1] == -1 ){
	        v[n-1] = v[0];
	    }
	    
	    cout<<abs(v[0] - v[n-1])<<endl;
	    for(auto i : v){
	        cout<<i<<" ";
	    }
	    cout<<endl;
	}

}
