#include<iostream>
#include<algorithm>
using namespace std;

void moveNegative(int array[], int n){
    int j =0;
    for(int i=0;i<n;i++){
        if(array[i]<0){
            if(i!=j){
                swap(array[i],array[j]);
            }
            j++;
        }
    }
}

int main(){
    int n;
    cin >> n;
    int array[n];
    for(int i=0; i<n; i++){
        cin >> array[i];
    }
    moveNegative(array, n);
    for(int i=0; i<n;i++){
        cout << array[i] <<" ";
    }
    return 0;
}