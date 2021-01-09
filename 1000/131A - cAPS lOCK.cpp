// #include <cctype>
#include <iostream>
// #include <cstring>
// #include <cstdio>
using namespace std;

int main() {

    // char s[100];
    // cin>>s;
    // int n = strlen(s);

    // if(islower(s[0])){
    //     putchar(toupper(s[0]));
    // }
    // else
    //     cout<<s[0];

    // for(int i=1;i<n;i++){
    //     if(isupper(s[i])){
    //         putchar(tolower(s[i]));
    //     }
    //     else
    //         cout<<s[i];
        
    // }


    string s;
    char u;
    bool c = true;
    cin >> s;

    for(int i = 1; i < s.length(); i++)
    {
        if(islower(s[i]))
        {
            c = false;
        }
    }

    if(c == true)
    {
        for(int j = 0; j < s.length(); j++)
        {
            if(islower(s[j]))
                u = toupper(s[j]);
            else
                u = tolower(s[j]);
            cout << u;
        }
    }
    else
        cout << s;

	return 0;
}