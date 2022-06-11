#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;
    vector<int>arr(size,0);
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
    int SumOfArray=(size*(size+1)/2);
    int SumOfSquare=(size*(size+1)*(2*size+1)/6);
    for (int i=0;i<size;i++){
        SumOfArray-=arr[i];
        SumOfSquare-=arr[i]*arr[i];
    }
    int missingNumber=((SumOfArray+SumOfSquare/SumOfArray)/2);
    int repeatedNumber=missingNumber-SumOfArray;
    
    cout<<missingNumber<<endl;
    cout<<repeatedNumber<<endl;
}