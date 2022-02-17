#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;


int main() {
    int T;
    cin >>T;
    ull max_limit = 1e5;
    vector<int> factorCount(max_limit+1,0);
    factorCount[1] = 1;
    for(int num=2;num<max_limit;num++){
        for(int i=1;i*i<=num;i++){
            if(num%i == 0){
                if(i == num/i) factorCount[num]++;
                else factorCount[num]+=2;
            }
        }
    }
    while(T--){  
        int n;      
        cin>>n;
        for(int num=1;num<factorCount.size();num++){
            int even_no = (num%2?(num+1)/2:num/2);
            int odd_no = (num%2?num:num+1);
            int count1 = factorCount[even_no];
            int count2 = factorCount[odd_no];
            if(count1*count2 > n){
                cout<<even_no*odd_no<<endl;
                break;
            }
        }
    }
    return 0;
}
