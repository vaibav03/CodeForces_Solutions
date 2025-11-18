#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> v(3);
  cin>>v[0]>>v[1]>>v[2];
  sort(v.begin(), v.end());

  if(v[2] - v[0] < 10 ) cout<<"final "<<v[1]<<endl;
  else cout<<"check again"<<endl;
  return 0;
}