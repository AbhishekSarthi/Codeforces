#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string s;
    cin>>s;
    int n= s.length(),u=0,l=0;
    
    for(int i=0;i<n;i++){
        if (isupper(s[i]))
            u++;
        else
            l++;
    }
    
    for(int i=0;i<n;i++){
        int c = s[i];
        if(u>l){
            s[i] = toupper(c);
        }
        else{
            s[i] = tolower(c);
        }
    }
    
    cout<<s;
    
	return 0;
}
