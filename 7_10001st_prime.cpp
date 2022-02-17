#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;


int main() {
    ull max = 1e7;
    vector<bool> arr(max,true);
    vector<ull> primes;
    arr[0] = false;
    arr[1] = false;
    for(ull i=2;i*i<max;i++){
        if(arr[i]){
            for(ull j=i*i;j<max;j+=i){
                arr[j]=false;
            }
        }        
    }
    for(int i=0;i<arr.size();i++){
        if(arr[i]) primes.push_back(i);
    }
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        cout<<primes[n-1]<<endl;
    }
    return 0;
}
