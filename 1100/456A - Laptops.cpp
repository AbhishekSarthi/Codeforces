#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n,flag =0;
	cin>>n;
	int a[n],b[n];
	vector<pair<int,int>> v;
	
	for(int i=0;i<n;i++){
	    cin>>a[i]>>b[i];
	    v.push_back( make_pair(b[i],a[i]));
	}
	    
    sort(v.begin(),v.end());
    
    // for(int i=0;i<n;i++)
    //     cout<<v[i].first<<"  "<<v[i].second<<"\n";
        
    for(int i=0;i<n-1;i++){
        if(v[i+1].second < v[i].second){
                cout<<"Happy Alex";
                flag=1;
                break;
        }
    }
    
    if(flag == 0)
        cout<<"Poor Alex";
    
    
	return 0;
}
