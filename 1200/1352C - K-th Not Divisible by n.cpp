#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        
	ll N;
	cin>>N;
	ll K;
	cin>>K;
	    
	ll res = K + floor((K - 1) / (N - 1));
	cout<<res<<"\n";
    
        
    }
	
	return 0;
}
