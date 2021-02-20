#include<iostream>
using namespace std;

// selection sort
void sortArray(int array[], int n){
   // running the loop till n-2 elements 
    for(int i=0; i<n-1;i++){
        // running the loop from i+1 to last element

        for(int j=i+1;j<n;j++){
            // making sorted and unsorted array
            if(array[j]<array[i]){
                // if less then we swap the elemets
                int temp = array[j];
                array[j]=array[i];
                array[i]= temp;
                
            }
        }       
    }
}
int main(){
    int n;
    cin >> n; // user input(array length)
    int array[n];
    for(int i = 0;i<n;i++){
        cin >> array[i];
    }
    sortArray(array, n); // sorting the array
    cout << array[0] << " "<< array[n-1]; // printing the minimum and maximum elements
}