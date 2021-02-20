#include<iostream>
using namespace std;

void arrayReversal(int arrReve[], int n){
    int start =0;
    int end = n-1;
    while(start<end){
        int temp= arrReve[start];
        arrReve[start]=arrReve[end];
        arrReve[end]=temp;
        start++;
        end--;
    }
}
int main(){
    int n;
    cin >> n;
    int arrReve[n];
    for (int i=0; i < n;i++){
        cin >> arrReve[i];
    }
    arrayReversal(arrReve, n);
    for(int i=0; i<n; i++){
        cout<<arrReve[i]<<" ";
    }
    return 0;
}