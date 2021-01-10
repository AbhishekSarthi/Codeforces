#include <iostream>
#include<bits/stdc++.h> 
using namespace std;

int main() {

    int a,b,res,c,d;
    cin>>a>>b;
    
    res = a;
    
    while(a >= b){
        d = a/b;
        c = a%b;
        res += d;
        a = d+c;
    }
    
    cout<<res;
    
    
    // res = a;
    // c = a%b;
    // while(a>0){
    //     a = a/b;
    //     c += a%b;
    //     res += a;
    // }

    // while(c>0){
    //     c = c/b;
    //     res+= c;
    // }
    // cout<<res;
  
	return 0;
}
