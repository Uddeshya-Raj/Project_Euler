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
        int n,k;
        cin>>n;
        cin>>k;
        string number;
        cin>>number;
        vector<string> strs;
        string st = "";
        for(int i=0;i<number.size();i++){
            if(number[i]=='0' && st.size()){
                strs.push_back(st);
                st = "";
            }else if(number[i]=='0') st = "";
            else st+=number[i];
        }
        if(st.size()) strs.push_back(st);
        ull max_prod = 0;
        for(string num: strs){
            if(num.size()<k) continue;
            ull prod = 1;
            for(int pos=0;pos<k;pos++) prod*=num[pos]-'0';
            ull curr_max_prod = prod;
            int start = 0;
            for(int i=k;i<num.size();i++){
                prod/=(num[start]-'0');
                start++;
                prod*=(num[i]-'0');
                curr_max_prod = max(prod,curr_max_prod);
            }
            max_prod = max(max_prod,curr_max_prod);
        }        
        cout<<max_prod<<endl;
    }   
    return 0;
}
