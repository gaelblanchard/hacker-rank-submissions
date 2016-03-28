//
//  diagonal_sum.cpp
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    int primarydiagsum=0;
    int secondarydiagsum=0;
    int finaldiff=0;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
        for(int a_j = 0;a_j < n;a_j++){
            cin >> a[a_i][a_j];
        }
    }
    for(int i=0;i<n;i++){
        primarydiagsum=primarydiagsum+a[i][i];
    }
    for(int i=0;i<n;i++){
        secondarydiagsum=secondarydiagsum+a[i][n-(i+1)];
    }
    finaldiff=primarydiagsum-secondarydiagsum;
    if(finaldiff<0){
        finaldiff=finaldiff*-1;
    }
    cout<<finaldiff<<endl;
    
    return 0;
}
