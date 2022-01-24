#include <iostream>
using namespace std;
int kadanes(int arr[],int n){
    int maxsum =0 ;
    int currsum =0;
    for(int i=0;i<n;i++){
        currsum=currsum + arr[i];
        maxsum=max(maxsum,currsum);
        if(currsum<0){
            currsum=0;
        }
    }
    return maxsum;
}
int main (){
    int arr[]={2,-1,5,-2,7,0};
    int n = sizeof(arr)/sizeof(int);
    cout<<kadanes(arr,n);

    return 0;
}