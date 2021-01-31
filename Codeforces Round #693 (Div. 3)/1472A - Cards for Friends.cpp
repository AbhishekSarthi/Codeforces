#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int w,h,n,res=1;
        cin>>w>>h>>n;
        
        while(w%2 == 0){
            w /= 2;
            res *= 2;
        }
        while(h%2 == 0){
            h /= 2;
            res *= 2;
        }
        if(res >=n)
            cout<<"YES";
        else
            cout<<"NO";
        cout<<"\n";    
    }
    
    
    return 0;
}
