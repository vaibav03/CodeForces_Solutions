#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans = "";
    int i = 0;
    while(i<n){

            int ind = i+1;
            while(ind< n && s[ind] == s[i]) ind++;
            if(ind  == n) break;
            
            ans+=s[i];
            ans+=s[ind];
            i = ind+1;

    }
    cout<<n - ans.size()<<endl;
    cout<<ans<<endl;
    
    return 0;
}
