#include <bits/stdc++.h>
using namespace std;
vector<int> sieve(1e6+1,1);
 
int main() {
      int n;
      cin>>n;
      sieve[0] = sieve[1] = 0;
      for(int i=2;i<1e6+1;i++){
          for(int j = i*2;j<1e6+1;j+=i){
              sieve[j] = 0;
          }
      }
 
      while(n--){
          long long x ;
          cin>>x;
          long long sqr = sqrt(x);
          if(sqr*sqr  == x && sieve[sqr] == 1){
              cout<<"YES"<<endl;
          } else{
              cout<<"NO"<<endl;
          }
      }
      
	return 0;
}
