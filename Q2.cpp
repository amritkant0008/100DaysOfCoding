#include <iostream>
#include <vector>
using namespace std;
int maxsubarray(vector<int> s){
    int maxsum =0;
    int currsum=0;
    int n=s.size();
    for(int i=0;i<n;i++){
    currsum = currsum+s[i];
    if(currsum<0){
        currsum=0;
    }
    maxsum=max(currsum,maxsum);
    }
    return maxsum;
}

int main(){
    vector<int> s {1,-2,3,4,4,-2};

    cout<<maxsubarray(s);

    return 0;
}