#include <iostream>
using namespace std;

int l_search(int arr[],int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){

    int arr[]={4,58,54,69,25,34};
    int n=sizeof(arr)/sizeof(int);
    cout<<n<<"whats this ";
    int key;
    cin>>key;
    int index = l_search(arr,n,key);
    if(index!=-1){
        cout<<key<<" is present at index"<<index<<endl;
    }
    else{
        cout<<key<<" is not found";
    }


    return 0;
}
