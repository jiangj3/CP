#include <bits/stdc++.h>
#include <chrono> 
using namespace std;
using namespace std::chrono; 
 
template<class T> using min_pq=priority_queue<T, vector<T>, greater<T>>;


#define john {ios_base::sync_with_stdio(false);}
#define cena {cin.tie(NULL);}



#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define f0r(a, b) for (long long a = 0; a < (b); ++a)
#define F0R(i, a, b) for (int i=a; i<(b); i++)
#define EACH(x, a) for (auto& x: a)
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
#define SUM(a) accumulate(a.begin(), a.end(), 0)
typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;
 

 
mt19937_64 rng(std::chrono::steady_clock::now().time_since_epoch().count());
// mt19937_64 rng(61378913);
/* usage - just do rng() */
 
void usaco(string filename) {
  // #pragma message("be careful, freopen may be wrong")
	freopen((filename + ".in").c_str(), "r", stdin);
	freopen((filename + ".out").c_str(), "w", stdout);
}

const char newl = '\n';
void dbg(vector<int> v){for(auto x : v) cout << x << ' '; cout << newl;}
void dbg(vector<vector<int>> v){for(auto row : v){for(auto x : row) cout << x<< ' ';cout << newl;}}
//const lld pi = 3.14159265358979323846;
//const ll mod = 1000000007;
//const ll mod = 998244353;
// ll mod;
 
 
 
 int gcd(int a, int b){
	 if(b==0) return a;
	 return gcd(b, a % b);

 }



void solve(int tc = 0) {
	int n, m;
	cin >> n >> m;
	int weaker[n]= {0};
	int deg[n] = {0};
	int ans=0;


	

	//remember nodes are indexed 1
	int start, end;
	f0r(a, m){
		cin >> start >> end;
		weaker[max(start, end)-1]++;
		deg[start-1]++;
		deg[end-1]++;

	}
	
	ans=0;
	f0r(i, n) if(weaker[i] == deg[i]) ans++;


	int q;
	cin >> q;
	int qType =0;
	f0r(a, q){
		cin >> qType;

//case 1
		if(qType ==1){
			cin >> start >> end;
			if(weaker[start-1] == deg[start-1]) ans--;
			if(weaker[end-1]==deg[end-1]) ans--;
			
			weaker[max(start, end)-1]++;
			deg[start-1]++;
			deg[end-1]++;

			if(weaker[start-1]==deg[start-1]) ans++;
			if(weaker[end-1] == deg[end-1]) ans++;
			



		}//end if


//case 2

		else if(qType ==2){
			cin >> start >> end;
			if(weaker[start-1] == deg[start-1]) ans--;
			if(weaker[end-1]==deg[end-1]) ans--;
			weaker[max(start, end)-1]--;
			deg[start-1]--;
			deg[end-1]--;
			if(weaker[start-1]==deg[start-1]) ans++;
			if(weaker[end-1] == deg[end-1]) ans++;



		}//end else if

		else{
			
			cout << ans << newl;


		}//end else





	}//end process query







}//end solve
 
int main() {
	
	auto begin = std::chrono::high_resolution_clock::now();
	john cena
	cout << setprecision(15) << fixed;
								
	
	
	int tc = 1;
	//cin >> tc;
	for (int t = 0; t < tc; t++) solve(t);
	//need testcases?
	
	
	auto end = std::chrono::high_resolution_clock::now();
	cerr << setprecision(4) << fixed;
	cerr << "Execution time: " << std::chrono::duration_cast<std::chrono::duration<double>>(end - begin).count() << " seconds" << endl;
	
}//end main











