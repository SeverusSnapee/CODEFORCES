#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr{110,0};
    int k;
    for(int i=0;i<n;++i){
        cin>>k;
        arr[i]=k;
    }
    vector<int>arr1{110,0};
    for(int i=0;i<n;++i){
int x=arr[i];
arr1[x-1]=i+1;
    }
    for(int i=0;i<n;++i){
        cout<<arr1[i]<< " ";
    }
}