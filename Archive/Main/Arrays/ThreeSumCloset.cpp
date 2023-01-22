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

int getDist(int a, int b) {
    
    return abs(a - b);

}

int threeSumClosest(vector<int>& nums, int target) {
    
    int k = 3;
    
    sort(nums.begin(), nums.end());
    
    
    
    int bestSum = INT_MAX;
    
    for(int i = 0; i <= nums.size() - k; i++) {
        
        int L = i + 1, R = nums.size() - 1;
        
        while(L < R) {
            
            int sum = nums[i] + nums[L] + nums[R];
            int dist = getDist(sum, target);
            
            if(bestSum == INT_MAX || dist < getDist(bestSum, target)) {
                bestSum  = sum;
            }
            
            if(sum == target) return bestSum;
            else if(sum < target) L++;
            else R--;
            
        }
       
    }
    return bestSum;
    
}

vector<int> InputVector(int n) {
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    return v;
}

void Solution(){
        
    int n, t;
    cin >> n >> t;
    
    vector<int> v = InputVector(n);
    
    int ans = threeSumClosest(v, t);
    
    cout << ans;
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

/* LeetCode Link

https://leetcode.com/problems/3sum-closest/

*/