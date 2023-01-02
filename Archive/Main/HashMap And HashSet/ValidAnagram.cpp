#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pi;
typedef long long ll;
#define PI 3.141592653589793238462
#define rep(i,a,b) for (int i = a; i < b; i++)
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#ifndef ONLINE_JUDGE
#define db(x) cout<<#x<<" : "<<x<<endl;
#define debug(x) cerr<<#x<<" : "<<x<<endl;
#define pvec(v) cout<<"[";rep(x, 0, v.size()){cout<<v[x];if(x<v.size()-1)cout<<" ";}cout<<"]"<<endl;
#else
#define pvec(v) ;rep(x, 0, v.size()){cout<<v[x];if(x<v.size()-1)cout<<" ";}cout<<endl;
#define db(x)
#define debug(x)
#endif
#define getVal(c) (c-'a'+1)

const int N = 0;

bool isAnagram(string &str1, string &str2) {
    if(str1.size() != str2.size()) return false;
    
    unordered_map<char, int> m;
    int n = str1.size();
    
    for(int i = 0; i < n; i++) {
        
        m[str1[i]]++;
        
        
    }
    
    for(char c : str2) {
        if(m.count(c)) {
            m[c]--;
            if(m[c] == 0) {
                m.erase(c);
            }
        }
        else {
            return false;
        }
    }
    
    
    return true;
}


void Solution(){
        
    string str1, str2;
    cin >> str1 >> str2;
    cout << isAnagram(str1, str2);
    
}


signed int main(){
    
    #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // freopen("error.txt", "w", stderr);
    #endif
    
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int t = 1;
    //cin >> t;
    while(t--){
        Solution();
    }
    return 0;
}


/* Complexities

Time Complexity : O(N)

Space Complexity : O(N+M); where N, M Are length Of The Strings Given

*/


/* LeetCode Link

https://leetcode.com/problems/valid-anagram/

*/


/*    Sample Testcases

Case #1:
anagram nagaram

Case #2:
car rat

Case #3:
abc bca

*/