/*
* 
* @author: Manish Kumar
* @institute: IIIT Allahabad, INDIA
*
* @problem: https://cses.fi/problemset/task/1660
* @disc: also work for -ve values 
*
*/

#include<bits/stdc++.h>
using namespace std;

template <typename T>
void print(T &&t)  { cout << t << "\n"; }
template <typename T, typename... Args>
void print(T &&t, Args &&... args)
{   cout << t << " ", print(forward<Args>(args)...); }
#define _print(v) for(auto i:(v)) cout<<i<<" "; cout<<"\n";
#define fs  first
#define sc  second
#define pb  push_back
#define int long long

int solve(){
    int n, sum, cnt = 0;
    cin >> n >> sum;
    vector<int> v(n);
    for(int &x:v)
        cin >> x;
    
    map<int, int> m;

    int curr = 0;
    for(int i = 0; i < n; i++){
      curr += v[i];

      if(curr == sum) cnt++;
      if(m.count(curr-sum))
        cnt += m[curr - sum];

      m[curr]++;
    }

    print(cnt);
    
    return 0;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t = 1;
    // cin>>t;
    for(int i = 0; i < t; i++)
        solve();
}