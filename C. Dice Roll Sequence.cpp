#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int ans{};
	    vector<int> vec;
	    while(n--){
	        int x;
	        cin>>x;
	        vec.push_back(x);
	    }
	    for(int i=0;i<vec.size()-1;i++){
	        if(vec[i] + vec[i+1] == 7 || vec[i]==vec[i+1] ){ ans++; i++;}
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
