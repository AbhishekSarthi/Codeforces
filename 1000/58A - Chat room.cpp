#include <iostream>
using namespace std;

int main() {
	// your code goes here
	string s;
	cin>>s;
	string p = "hello";
	
	int count =0 ,n = s.length();
	for(int i=0;i<n;i++){
	    if(count < 5){
	       if(p[count]==s[i])
	        count++; 
	    }
	    
	}
	if(count==5){
	    cout<<"YES";
	}
	else{
	    cout<<"NO";
	}
	
	return 0;
}
