#include <bits/stdc++.h>
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

#define SUM(a) accumulate(a.begin(), a.end(), 0)
typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;
 

 
mt19937_64 rng(std::chrono::steady_clock::now().time_since_epoch().count());
// mt19937_64 rng(61378913);
/* usage - just do rng() */
 


 
//const lld pi = 3.14159265358979323846;
//const ll mod = 1000000007;
//const ll mod = 998244353;
// ll mod;
 
 
 
// ll n, m, q, k, l, r, x, y, z;
// const ll template_array_size = 1e6 + 15038;
// ll a[template_array_size];
// ll b[template_array_size];
// ll c[template_array_size];
// string s, t;
// ll ans = 0;	
 
 
int euclidian(int a, int b){
    if(b==0) return a;
    else{
        euclidian(b, a%b);
    }

}
 
//int dp[2000][2000];
ll a[2000];
ll dp[2000][2000];


ll recur(int l, int r){
	if(l==r){
		return 0;
	}

	if(dp[l][r] != -1){
		return dp[l][r];
	}

	dp[l][r] = a[r] - a[l] + min(recur(l+1, r), recur(l, r-1));
	return dp[l][r];



}//end recur

void solve(int tc = 0) {
    int n;
	cin >> n;
	
	for(int i=0;i<n;i++){
		cin >> a[i];
	}

	sort(a, a+n);
	memset(dp, -1, sizeof(dp));
	cout << recur(0, n-1) << '\n';
	




	


}//end solve
 
int main() {
	
	auto begin = std::chrono::high_resolution_clock::now();
	
	
	send help
 
	
	
	
		
	cout << setprecision(15) << fixed;
								
	// int tc = 1;
	// cin >> tc;
	// for (int t = 0; t < tc; t++) solve(t);

	solve(0);
	
	
	auto end = std::chrono::high_resolution_clock::now();
	cerr << setprecision(4) << fixed;
	cerr << "Execution time: " << std::chrono::duration_cast<std::chrono::duration<double>>(end - begin).count() << " seconds" << endl;
	
}//end main











