#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;


int main() {
    int T;
    cin>>T;
    while(T--){
        ull n;
        cin>>n;
        while(!(n%2)){
            n = n/2;
        }
        if(n == 1) cout<<2<<endl;
        else{
            ull divisor = 3;
            ull limit = sqrt(n);
            while(divisor<=limit){
                if(n%divisor == 0){
                    n = n/divisor;
                    divisor = 3;
                    limit = sqrt(n);
                }else divisor+=2;        
            }
            cout<<n<<endl;
        }
    }
    return 0;
}
