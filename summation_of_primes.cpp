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
    vector<ull> prime_sum;
    vector<bool> primes(1000001,true);
    primes[0] = primes[1] = false;
    for(int i = 2; i*i <= 1000001; i++){
        for(int j=i*i;j<=1000001;j+=i) primes[j] = false;
    }
    prime_sum.push_back(0);
    prime_sum.push_back(0);
    for(int i=2;i<=1000001;i++){
        if(primes[i]) prime_sum.push_back(prime_sum.back()+i);
        else prime_sum.push_back(prime_sum.back());
    }
    while(T--){
        int n;
        cin>>n;
        cout<<prime_sum[n]<<endl;
    }  
    return 0;
}
