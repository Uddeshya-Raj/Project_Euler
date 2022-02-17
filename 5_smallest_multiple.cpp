#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        vector<int> arr(n,0);
        for(int i=0;i<n;i++) arr[i] = i+1;
        int divisor = 2;
        int x = 1;
        
        while(divisor<=n){
            int count = 0;
            for(int i=0;i<n;i++){
                if(arr[i]%divisor == 0) count++;
            }
            if(count >= 2){
                for(int i=0;i<n;i++){
                    if(arr[i]%divisor == 0) arr[i] = arr[i]/divisor;
                }
                x = x*divisor;
            }else divisor++;
        }
        
        int y = 1;
        for(int i=0;i<n;i++) y = y*arr[i];
        cout<<x*y<<endl;
    }
    return 0;
}
