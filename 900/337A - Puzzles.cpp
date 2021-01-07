#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int s,p,dif = INT_MAX,res = INT_MAX;
    cin>>s>>p;
    int a[p];
    for(int i=0;i<p;i++)
        cin>>a[i];
    
    sort(a,a+p);
    
    for(int i=0;i<p-s+ 1;i++){
        dif = a[i + s - 1] - a[i];
        res = min(dif,res);
    }
      
    cout<<res;
        
	return 0;
}
