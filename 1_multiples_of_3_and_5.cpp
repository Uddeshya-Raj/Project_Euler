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
        int n;
        cin>>n;
        int total = 0;
        ull sum3 = 0, sum5 = 0, sum15 = 0;
        ull x = (n-1)/3;
        sum3 = (x*(x+1))/2;
        x = (n-1)/5;
        sum5 = (x*(x+1))/2;
        x = (n-1)/15;
        sum15 = (x*(x+1))/2;
        cout<<3*sum3+5*sum5-15*sum15<<endl;
    }
    return 0;
}
