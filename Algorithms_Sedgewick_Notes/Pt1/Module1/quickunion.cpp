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

        int rootfindr(int p){
            if (p < 0 || p >= size) return -1;
            else if(p==arr[p]) return p;
            else return rootfindr(arr[p]);
        }

        bool connected(int p, int q){
            if (p < 0 || q < 0 || p >= size || q >= size){
                return false;
            }
            return (rootfindr(p)==rootfindr(q));
            
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
            int pr=rootfindr(p);
            int qr=rootfindr(q);
            arr[pr]=qr;
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