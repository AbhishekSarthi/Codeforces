#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int flag = 0;
    string s0 = "0000000";
    string s1 = "1111111";
    
    
    int n = s.length();
    for(int i=0;i<n;i++){
        if(s.find(s0,i) != string::npos || s.find(s1,i) != string::npos){
            flag = 1;
            cout<<"YES";
            break;
        }
            
    }
    if(flag == 0)
        cout<<"NO";
    
    
	return 0;
}
