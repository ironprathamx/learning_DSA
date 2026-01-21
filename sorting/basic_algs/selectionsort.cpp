#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> arr = {7,3,6,1,9,4};
    for(int i=0;i<arr.size();i++){
        int lindex=i;
        for(int j=i;j<arr.size();j++){
            if (arr[j]<arr[lindex]) lindex=j;
        }
        if (lindex!=i) swap(arr[lindex],arr[i]);
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<'\t';
    }
}