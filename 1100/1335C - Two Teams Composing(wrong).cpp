#include <bits/stdc++.h>
using namespace std;

int main() {
	
    int t;
    cin>>t;
    while(t--){
        int n,count = 1,res = 1;
        cin>>n;
        int a[n];
        
        unordered_set<int> s;
        
        for(int i=0;i<n;i++){
            cin>>a[i];
            s.insert(a[i]);
        }
        
        int res2 = s.size();    
        sort(a,a+n);
        
        for(int i=0;i<n-1;i++){
            if(a[i] == a[i+1]){
                count++;
                res = max(res,count);
            }
            else
                count = 1;
        }
        
        // cout<<res2<<"   "<<res<<"\n";
        
        if(n == 1)
            cout<<"0";
        else if(min(res,res2)>=n/2)
            cout<<n/2;
        else
            cout<<min(res2,res);
        
        cout<<"\n";    
    }
    
	return 0;
}
