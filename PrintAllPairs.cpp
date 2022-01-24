#include<iostream>
using namespace std;
void PrintAllPairs(int arr[],int n){
    for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        cout<<arr[i]<<","<<arr[j]<<endl;
        }
        cout<<endl;
    }
}

int main(){
    int arr[]={21,8,79,55,69,420};
    int n=sizeof(arr)/sizeof(int);
    PrintAllPairs(arr,n);

    
    
    return 0;
}