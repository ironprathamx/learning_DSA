#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> arr = {7,3,6,1,9,4};
    for(int i=arr.size()-1;i>0;i--){
        for(int j=0;j<i;j++){
            if (arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);

        }
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<'\t';
    }
}