#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
#include <queue>
#include <unordered_set>
using namespace std;
#define ll long long

bool isPal(string x){
    string r;
    r = string(x.rbegin(), x.rend());
    return r==x;

}

void solve(){
    string s;
    cin >> s;
    string test;
    bool all_a = true;
    for(auto i: s){
        if(i!='a') all_a = false;
    }

    if(all_a){
        cout << "NO" << endl;
    }

    else{
    
        test = s + "a" ;
        if(!isPal(test)) {
            cout << "YES" << endl;
            cout << test << endl;
            return;
        }

        test = "a" + s;
        if(!isPal(test)) {
            cout << "YES" << endl;
            cout << test << endl;
            return;
        }

    

    cout << "NO" << endl;
    }        






}//end solve


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int q;
    cin >> q;
    for(int i=0;i<q;i++){
        solve();
    }
    return 0;



}


