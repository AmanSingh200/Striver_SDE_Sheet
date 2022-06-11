#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void merge(int *arr,int s,int e,int &count){
    int mid=s+((e-s)/2);
    int len1=mid-s+1;
    int len2=e-mid;
    int *first=new int[len1];
    int *second=new int[len2];
    int mainIndexArray=s;
    for (int i=0;i<len1;i++){
        first[i]=arr[mainIndexArray++];
    }
    mainIndexArray=mid+1;
    for (int i=0;i<len2;i++){
        second[i]=arr[mainIndexArray++];
    }
    int index1=0;
    int index2=0;
    mainIndexArray=s;
   
    while (index1<len1 && index2<len2){
        if (first[index1]<second[index2]){
            arr[mainIndexArray++]=first[index1++];
        }
        else {
            arr[mainIndexArray++]=second[index2++];
        }
    }
    while (index1<len1){
        arr[mainIndexArray++]=first[index1++];
    }
    while (index2<len2){
        arr[mainIndexArray++]=second[index2++];
    }

}
void mergeSort(int *arr,int s,int e,int &count){
    if (s>=e){
        return;
    }
    int mid=s+((e-s)/2);
    //left sort;
    mergeSort(arr,s,mid,count);
    mergeSort(arr,mid+1,e,count);
    merge(arr,s,e,count);

}
int main(){
    int arr[5]={1,2,3,4,5};
    int e=5;
    int count=0;
    mergeSort(arr,0,e-1,count);
    cout<<count<<endl;
    return 0;
}