#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> nums;
    for(int i=100;i<=999;i++){
        for(int j=i;j<=999;j++){
            int prod = i*j;
            string st = to_string(prod);
            string st2 = st;
            reverse(st.begin(),st.end());
            if(st == st2) nums.push_back(prod);
        }
    }
    sort(nums.begin(),nums.end());
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int pos = lower_bound(nums.begin(),nums.end(),n)-nums.begin();
        cout<<nums[pos-1]<<endl;
    }
    return 0;
}
