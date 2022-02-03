#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ull unsigned long long
using namespace std;


int main() {
    vector<vector<int>> input(20,vector<int>(20,0));
    for(int i=0;i<20;i++)
        for(int j=0;j<20;j++)
            cin>>input[i][j];
    ull maxProd = 0;
    for(int i=0;i<20;i++){
        for(int j=0;j<17;j++){
            ull prod_h = input[i][j]*input[i][j+1]*input[i][j+2]*input[i][j+3];
            ull prod_v = input[j][i]*input[j+1][i]*input[j+2][i]*input[j+3][i];
            maxProd = max(maxProd,prod_h);
            maxProd = max(maxProd,prod_v);
        }
    }
    for(int i=4;i<=20;i++){
        for(int j=0;j<i-3;j++){
            ull prod_l = input[20-i+j][j]*input[20-i+j+1][j+1]*input[20-i+j+2][j+2]*input[20-i+j+3][j+3];
            ull prod_r = input[20-i+j][19-j]*input[20-i+j+1][19-j-1]*input[20-i+j+2][19-j-2]*input[20-i+j+3][19-j-3];
            maxProd = max(maxProd,prod_l);
            maxProd = max(maxProd,prod_r);
        }
    }
    for(int i=1;i<=16;i++){
        for(int j=0;j<20-i-3;j++){
            ull prod_l = input[j][i+j]*input[1+j][i+j+1]*input[2+j][i+j+2]*input[3+j][i+j+3];
            ull prod_r = input[0+j][19-i-j]*input[1+j][19-i-j-1]*input[2+j][19-i-j-2]*input[3+j][19-i-j-3];
            maxProd = max(maxProd,prod_l);
            maxProd = max(maxProd,prod_r);
        }
    }
    cout<<maxProd<<endl;
    return 0;
}
