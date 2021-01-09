#include <iostream>
#include <string>
using namespace std;

int main() {

    // string s;
    // cin>>s;
    // int i,n = s.length();
    // int count =0;
    
    // if(stoi(s)%4 == 0 || stoi(s)%7 == 0){
    //     cout<<"YES";
    // }
    // else{
    //     for(i=0;i<n;i++){
    //         if(s[i] == '4' || s[i] == '7'){
    //             count++;
    //         }
    //         else{
    //             cout<<"NO";
    //             break;
    //         }
            
    //     }
    //     if(count == n){
    //         cout<<"YES";
    //     }
    // }
    
    int n;
    cin>>n;
    bool flag=0;
    int arr[12]={4,7,47,74,44,444,447,474,477,777,774,744};
         for(int i=0;i<12;i++){
        	 if(n%arr[i]==0){
	        	 flag=true;
	        }
         }
    if(flag)
        cout<<"YES";
    else
	    cout<<"NO";
    
    
	return 0;
}
