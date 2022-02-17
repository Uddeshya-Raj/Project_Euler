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
    vector<ull> fibo;
    vector<ull> sum;
    fibo.push_back(1);
    fibo.push_back(2);
    sum.push_back(0);
    sum.push_back(2);
    while(T--){
        ull n;
        cin>>n;
        if(n<=fibo.back()){
            ull pos = lower_bound(fibo.begin(),fibo.end(),n) - fibo.begin();
            if(fibo[pos] == n) cout<<sum[pos]<<endl;
            else cout<<sum[pos-1]<<endl;
        }else{
            while(true){
                ull x = fibo[fibo.size()-1]+fibo[fibo.size()-2];
                if(x>n){
                    cout<<sum.back()<<endl;
                    break;
                }
                fibo.push_back(x);
                if(x%2) sum.push_back(sum.back());
                else sum.push_back(sum.back()+x);
            }
        }
    }  
    return 0;
}
