#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    vector<vector<int> > arr (n,vector<int>(n));
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
    vector<vector<int> > arr2 (n,vector<int>(n));
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            arr2[j][i]=arr[i][j];
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;

    for (int i=0;i<n;i++){
        int temp=arr2[i][0];
        arr2[i][0]=arr2[i][n-1];
        arr2[i][n-1]=temp;
    }

    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
}

