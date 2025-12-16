#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int rows = 1;
    while(rows<=n){
        int cols = 1;

        while(cols<=rows){
            
            cout<<(rows-cols+1)<<" ";
            cols = cols+1;
        }
        rows = rows+1;
    }
}