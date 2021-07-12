#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
       int n,result =0;
       cin>>n;
       int a[n];
       for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
    
        for(int sum=0;sum<=100;sum++){
            int l=0,r=n-1,res=0;
            while(l<r){
                if(a[l] + a[r] == sum){
                    res++;
                    l++;
                    r--;
                }
                else if(a[l] + a[r] > sum){
                    r--;
                }else{
                    l++;
                }
            }
            result = max(result,res);        
        }
            
        cout<<result<<"\n";
        
        
    }
	return 0;
}
