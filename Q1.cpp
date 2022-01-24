#include<iostream>
using namespace std;
int largeInt(int arr[],int n){
    int LargeInt =0;
    for(int i=0;i<n;i++){
        LargeInt = max(LargeInt,arr[i]);
    }
    return LargeInt;
}
int main(){
    int arr[]={-1,-2,-3,-3,8};
    int n = sizeof(arr)/sizeof(int);

    cout<<largeInt(arr,n);

    return 0;
}