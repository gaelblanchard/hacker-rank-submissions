//
//  plusminus.cpp
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
int main(){
    int n;//to allow fraction result
    double positiveCounter=0.0;
    double negativeCounter=0.0;
    double zeroCounter=0.0;
    long double fractionOutput;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
        cin >> arr[arr_i];
    }
    //counter for positive, negative and zero numbers
    for(int i=0; i < n;i++){
        if (arr[i]>0){
            positiveCounter = positiveCounter + 1;
        }
        if (arr[i]<0){
            negativeCounter= negativeCounter + 1;
        }
        if (arr[i]==0){
            zeroCounter= zeroCounter + 1;
        }
    }
    fractionOutput = positiveCounter/n;
    cout << std::fixed << fractionOutput << std::setprecision(6)<<endl;
    fractionOutput=negativeCounter/n;
    cout << std::fixed << fractionOutput << std::setprecision(6)<<endl;
    fractionOutput=zeroCounter/n;
    cout << std::fixed << fractionOutput << std::setprecision(6)<< endl;
    
    return 0;
}
