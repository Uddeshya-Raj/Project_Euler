#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ull unsigned long long
using namespace std;


int main() {
    int T;
    cin>>T;
    while(T--){
        ull n;
        cin>>n;
        ull res = n*(n+1)*(3*n*n - n - 2);
        cout<<res/12<<endl;
    }   
    return 0;
}
