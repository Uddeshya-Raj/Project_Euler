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
        int prod = -1;
        for(int a=1;a<=n/2;a++){
            int b = (n*n-2*a*n)/(2*(n-a));
            int c = n-a-b;
            if(a*a + b*b == c*c) prod = max(prod,a*b*c);
        }
        if(prod) cout<<prod<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}
