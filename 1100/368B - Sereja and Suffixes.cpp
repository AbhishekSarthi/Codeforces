#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main() {
	
	int n,m;
	cin>>n>>m;
	int a[n], count =0;
	
	vector<int> v;
	set<int> s;

    for(int i=0;i<n;i++)
        cin>>a[i];
	
	for(int i=n-1;i>=0;i--){
	    if(s.find(a[i]) == s.end()){
	        count++;
	        s.insert(a[i]);
	    }
	    v.push_back(count);
	}
	
	reverse(v.begin(),v.end());
	
	while(m--){
	    int p;
	    cin>>p;
	    cout<<v[p-1]<<"\n";
	}
	
	return 0;
}
