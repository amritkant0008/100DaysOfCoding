#include<iostream>
using namespace std;
int Sumof_subArray(int arr[],int n){
    int psum = 0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
               sum=sum+arr[k];        
            }
            psum=max(psum,sum);
        }
    }
    return psum;
}

int main(){
    int arr[]={1,2,3,4,5,};
    int n= sizeof(arr)/sizeof(int);
    cout<< Sumof_subArray(arr,n);

    return 0;
}