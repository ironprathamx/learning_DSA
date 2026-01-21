#include <iostream>
#include <vector>

using namespace std;


vector<int> qsort(vector<int> arr, int l, int h){
    if (l+1>=h) return arr;
    int key = arr[h];
    int pos=0;
    for(int i=0;i<h-l;i++) if(arr[i]<key)pos++;
    swap(arr[pos],arr[h]);
    arr=qsort(arr,l,pos-1);
    arr=qsort(arr,pos+1,h);
    return arr;
}


int main(){
    vector<int> arr = {3,1,2};
    arr = qsort(arr,0,arr.size()-1);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<'\t';
    }
}