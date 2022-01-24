#include<iostream>
#include<vector>
using namespace std;
int lowerbound(vector<int> s, int key){
    int n =s.size();
    int temp,k =0;
    for(int i=0;i<n;i++){
        int currdiff=key-s[i];
        if(i==0){
            temp=currdiff;
        }
        if(currdiff==0){
            return s[i];
        }

        else if(currdiff>0){
            if(temp>currdiff){
            temp=currdiff;
            k= s[i];
            }
        }
    }
    return k;
}

int main(){
    vector<int> s {0,2,3,5};
    int key;
    cin>>key;
    cout<<lowerbound(s,key);
}
