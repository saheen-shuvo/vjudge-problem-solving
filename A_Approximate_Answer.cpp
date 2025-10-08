#include<bits/stdc++.h>
using namespace std;
int main()
{
    int X, Y, K;
    cin >> X >> Y >> K;
    if(abs(X-Y) > K){
        cout << "No";
    }
    else{
        cout << "Yes";
    }
    return 0;
}