#include <iostream>
using namespace std;

int main() {

    int a,b,c;
    cin>>a>>b>>c;
    int res =0;
    
    res = max(a+(b*c) ,res);
    res = max(a*(b+c) ,res);
    res = max(a*(b*c) ,res);
    res = max((a+b)*c ,res);
    res = max(a+b+c , res);
    
    cout<<res;
   
	return 0;
}
