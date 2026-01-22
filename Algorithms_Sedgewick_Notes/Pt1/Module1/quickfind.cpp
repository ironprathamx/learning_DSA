#include <iostream>
#include <vector>

using namespace std;

class UF{
    public:
        vector<int> arr;
        int size;
        UF(int n) : arr(n), size(n) {
            for(int i = 0; i < n; i++){
                arr[i] = i;
            }
        }


        bool connected(int p, int q){
            if (p < 0 || q < 0 || p >= size || q >= size){
                return false;
            }
            return (arr[p]==arr[q]);
        }

        void union_(int p,int q){
            if (connected(p,q)){
                cout<<"Already connected!\n";
                return;
            }
            if(p < 0 || q < 0 || p >= size || q >= size){
                cout<<"Invalid input!\n";
                return;
            }
            int pa=arr[p];
            int qa=arr[q];
            for(int i=0;i<size;i++){
                if(arr[i]==pa) arr[i]=qa;
            }
        }

        void display(){
            for(int i=0;i<size;i++){
                cout<<arr[i]<<'\t';
            }
        }

};



int main(){
    // int n;
    // cout<<"Enter the number of nodes: ";
    // cin>>n;
    UF uf(10);
    uf.union_(1,2);
    uf.union_(1,0);
    uf.union_(1,5);
    uf.union_(3,4);
    uf.union_(4,6);
    uf.union_(8,9);
    uf.display();

    
}