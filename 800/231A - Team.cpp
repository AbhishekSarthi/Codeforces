#include <iostream>
using namespace std;

int main() {
	int sum =0,count = 0;
	int n;
	cin>>n;
	int A[3][n];
	
	for(int i=0;i<n;i++){
	    sum =0;
	    for(int j=0;j<3;j++){
	        cin>>A[j][i];
	        sum += A[j][i];
	        if(sum == 2 && A[j][i] == 1){
	            count++;
	        }
	    }
	}
	
	cout<<count;
	
	return 0;
}
