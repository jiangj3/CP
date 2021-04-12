#include "bits/stdc++.h"
#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
#include <queue>
#include <unordered_set>


using namespace std;
 
// templates from Willian Lin:  https://github.com/tmwilliamlin168/CompetitiveProgramming/blob/master/Templates/Main.cpp
// and Colin Galen: https://github.com/galencolin/cp-templates
 
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define F_OR(i, a, b, s) for (int i=(a); (s)>0?i<(b):i>(b); i+=(s))
#define F_OR1(e) F_OR(i, 0, e, 1)
#define F_OR2(i, e) F_OR(i, 0, e, 1)
#define F_OR3(i, b, e) F_OR(i, b, e, 1)
#define F_OR4(i, b, e, s) F_OR(i, b, e, s)
#define GET5(a, b, c, d, e, ...) e
#define F_ORC(...) GET5(__VA_ARGS__, F_OR4, F_OR3, F_OR2, F_OR1)
#define FOR(...) F_ORC(__VA_ARGS__)(__VA_ARGS__)
#define EACH(x, a) for (auto& x: a)
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;
 

 
mt19937_64 rng(std::chrono::steady_clock::now().time_since_epoch().count());
// mt19937_64 rng(61378913);
/* usage - just do rng() */
 


 
//const lld pi = 3.14159265358979323846;
// const ll mod = 1000000007;
// const ll mod = 998244353;
// ll mod;
 
 
 
ll n, m, q, k, l, r, x, y, z;
const ll template_array_size = 1e6 + 15038;
ll a[template_array_size];
ll b[template_array_size];
ll c[template_array_size];
string s, t;
ll ans = 0;	
 
 
 
void solve(int tc = 0) {
	int n;
    int x;
    int ans;

    cin >> n;
    vector<int> v;
    
    FOR(n){
        cin >> x;
        v.push_back(x);
    }

    for(int i=0;i<(n-2); i++){
        if(v[i]==v[i+1] && v[i+1] != v[i+2]){
            ans= i+3;
            break;
        }

        else if(v[i]==v[i+2] && v[i+1] != v[i+2]){
            ans=i+2;
            break;
        }

        else if(v[i+1]==v[i+2] && v[i+1] != v[i]){
            ans=i+1;
            break;
         }
    }//end for
    cout << ans << '\n';

    





    


}//end solve
 
int main() {
	#ifdef galen_colin_local
		auto begin = std::chrono::high_resolution_clock::now();
	#endif
	
	send help
 
	
	
	
		
	cout << setprecision(15) << fixed;
								
	int tc = 1;
	cin >> tc;
	for (int t = 0; t < tc; t++) solve(t);
	
	#ifdef galen_colin_local
		auto end = std::chrono::high_resolution_clock::now();
		cerr << setprecision(4) << fixed;
		cerr << "Execution time: " << std::chrono::duration_cast<std::chrono::duration<double>>(end - begin).count() << " seconds" << endl;
	#endif
} 











