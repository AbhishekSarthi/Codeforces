#include<bits/stdc++.h>
using namespace std;

int main(){
    
   int q,x,n;
	cin>>n;
	vector<int>a(n);
	int mi=INT_MAX,ma=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	cin>>q;
	while(q--){
		cin>>x;
		auto ans=upper_bound(a.begin(),a.end(),x);
		if(x<a[0]){
			cout<<0<<'\n';
			continue;
		}
		if(x>=a[n-1]){
			cout<<n<<'\n';
			continue;
		}
		cout<<ans-a.begin()<<'\n';
	}
    
    return 0;
}