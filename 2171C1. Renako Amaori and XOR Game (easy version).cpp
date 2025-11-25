#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr1,arr2;
	    int it = n;
	    while(it--){
	        int x;
	        cin>>x;
	        arr1.push_back(x);
	    }
	    it = n;
	    while(it--){
	        int x;
	        cin>>x;
	        arr2.push_back(x);
	    }
	  int a = accumulate(arr1.begin(),arr1.end(),0) , b = accumulate(arr2.begin(),arr2.end(),0);
	  if((a+b) %2 == 0 ) cout<<"Tie"<<endl;
	  else{
	      for(int i=n-1;i>=0;i--){
	          if( arr1[i] == !arr2[i] && i%2 == 0) {
	              cout<<"Ajisai"<<endl;
	              break;
	          }else if( arr1[i] == !arr2[i] && i%2 == 1){
	              cout<<"Mai"<<endl;
	              break;
	          }
	      }
	  }
	}

}
