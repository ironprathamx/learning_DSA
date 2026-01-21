#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> arr = {7,3,6,1,9,4};
    
    for(int i=1;i<arr.size();i++){
        int key=arr[i];
        int j=i-1;
        for(;(j>=0)&&(key<arr[j]);j--){
            arr[j+1]=arr[j];
            
        }
        arr[j+1]=key;
    }

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<'\t';
    }
}