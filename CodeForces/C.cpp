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

//const lld pi = 3.14159265358979323846;
//const ll mod = 1000000007;
//const ll mod = 998244353;
// ll mod;
const char newl = '\n';
void dbg(vector<int> v){for(auto x : v) cout << x << ' '; cout << newl;}
void dbg(vector<vector<int>> v){for(auto row : v){for(auto x : row) cout << x<< ' ';cout << newl;}}
void usaco(string filename) {
  // #pragma message("be careful, freopen may be wrong")
	freopen((filename + ".in").c_str(), "r", stdin);
	freopen((filename + ".out").c_str(), "w", stdout);
}



 


 
 int gcd(int a, int b){
	 if(b==0) return a;
	 return gcd(b, a % b);

 }

	


void solve(int tc = 0) {
	string s;
	cin >> s;
	int remain_a = 4, remain_b = 4;
	int score_a =0, score_b = 0;
	//0 miss, 1 hit
	vector<vector<int>> dp(10, vector<int> (2, 0));

	

	if(s[0]=='1'){
		dp[0][0] = 1;
		dp[0][1] = 1;
	}
	if(s[0]=='?'){
		dp[0][1] =1; 
	}

	if(s[1]=='1'){
		dp[1][0]=1;
		dp[1][1]=1;
	}
	if(s[1]=='?'){
		
		dp[1][1]=1;
	}



	for(int i=2;i<10;i++){
		
		
		
		
		if(i%2==0){
			if(s[i]=='1'){
				dp[i][0] = dp[i-2][0]+1;
				dp[i][1] = dp[i-2][1]+1;
			}
			
			//give to team in lead
			else if(s[i]=='?'){
				if(score_a>score_b){
					dp[i][0] = dp[i-2][0]+1;
					dp[i][1] = dp[i-2][1]+1;
				}
				else if(score_a==score_b){
					dp[i][0] = dp[i-2][0];
					dp[i][1] = 1 + dp[i-2][1];

				}
				
			}
			else{
				dp[i][0] = dp[i-2][0];
				dp[i][1] = dp[i-2][1];
			}

			remain_a--;
			if(max(dp[i][0], dp[i][1]) - min(dp[i-1][0], dp[i-1][1]) > remain_b){
				cout << i+1 << newl;
				//dbg(dp);
				return;
			}

			if(remain_a < max(dp[i-1][0], dp[i-1][1]) - min(dp[i][0], dp[i][1])){
				cout << i+1 << newl;
				//dbg(dp);
				return;
			}


		}//end if

		else{
			if(s[i]=='1'){
				dp[i][0] = dp[i-2][0]+1;
				dp[i][1] = dp[i-2][1]+1;
			}
			
			//give to team in lead
			else if(s[i]=='?'){
				if(score_b>score_a){
					dp[i][0] = dp[i-2][0]+1;
					dp[i][1] = dp[i-2][1]+1;
				}
				else if(score_a==score_b){
					dp[i][0] = dp[i-2][0];
					dp[i][1] = 1 + dp[i-2][1];

				}
				
			}

			else{
				dp[i][0] = dp[i-2][0];
				dp[i][1] = dp[i-2][1];
			}
			remain_b--;
			if(max(dp[i][0], dp[i][1]) - min(dp[i-1][0], dp[i-1][1])  > remain_a){
				cout << i+1 << newl;
				//dbg(dp);
				return;
			}

			if(remain_b < max(dp[i-1][0], dp[i-1][1]) - min(dp[i][0], dp[i][1])){
				cout << i+1 << newl;
				//dbg(dp);
				return;
			}


		}//end else





	}//end for

	cout << 10 << newl;
	


	
	

	



	





}//end solve
 
int main() {
	
	auto begin = std::chrono::high_resolution_clock::now();
	john cena
	cout << setprecision(15) << fixed;
								
	
	
	int tc = 1;
	cin >> tc;
	for (int t = 0; t < tc; t++) solve(t);
	//need testcases?
	
	
	auto end = std::chrono::high_resolution_clock::now();
	cerr << setprecision(4) << fixed;
	cerr << "Execution time: " << std::chrono::duration_cast<std::chrono::duration<double>>(end - begin).count() << " seconds" << endl;
	
}//end main











