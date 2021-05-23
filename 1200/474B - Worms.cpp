#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n];
    vector<int> sum;
	int total = 0;
	vector<int> res;
	for(int i=0;i<n;i++){
	    cin>>a[i];
	    total +=a[i];
	    sum.push_back(total); 
	}
	int m;
	cin>>m;
	int q[m];
	for(int i=0;i<m;i++){
	    cin>>q[i];
	    int ans = lower_bound(sum.begin(), sum.end(), q[i]) - sum.begin();
	    cout<<ans+1<<"\n";
	}
    
    
    
// 	 cout<<res;   
	return 0;
}
