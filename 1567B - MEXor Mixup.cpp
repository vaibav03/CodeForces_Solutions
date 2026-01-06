#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	vector<int> xorev(3*1e5+1, 0);
	for(int i=1;i<3*1e5+1;i++) xorev[i]= xorev[i-1] ^ i;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    
	    int xore = xorev[a-1];
	    //cout<<xore<<" "<<(xore^b)<<endl;
	    if(xore == b){
	        cout<<a<<endl;
	    }else if( (xore^b) == a){
	        cout<<a+2<<endl;
	    }else{
	        cout<<a+1<<endl;
	    }
	}

}
