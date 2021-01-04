#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int flag = 0;
    int n = s.length();
    
    for(int i=0;i<n;i++){
        if(s[i] == 'H'){
            cout<<"YES";
            flag = 1;
            break;
        }
        else if(s[i] == 'Q'){
            cout<<"YES";
            flag = 1;
            break;
        }
        else if(s[i] == '9'){
            cout<<"YES";
            flag = 1;
            break;
        }
        // else if(s[i] == '+'){
        //     cout<<"YES";
        //     flag = 1;
        //     break;
        // }
        else
            continue;    
    }
    
    if(flag == 0)
        cout<<"NO";
    
	return 0;
}
