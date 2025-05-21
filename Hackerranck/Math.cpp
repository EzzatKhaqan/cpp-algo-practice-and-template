#include <bits/stdc++.h>

using namespace std;


#define toInteger(v) stoi((v))
#define vt vector
string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &,char);


void solve(){
    int n;
    cin >> n;
    vector<int> routes;
    for(int i=0;i<n-1;i++){
        int route;
        cin >> route;
        routes.push_back(route);
    }
// 
   int res = 1;
   const int mod = 12345678;
   for(int i=0;i<n-1;i++){
    res=(res*routes[i]) %mod;
   }
   cout << res<<endl;
}

int main(){
   int t;
   cin >> t;
   while(t--){
    solve();
   }
    return 0;
}
