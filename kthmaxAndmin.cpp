#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int sortArray(vector<int> array, int n, int kthmin){
    sort(array.begin(), array.end());
    return array[kthmin-1];
}
int main(){
    int n, kthmin,a;
    cin >> n >> kthmin;
    vector<int> array; 
    for(int i=0;i<n;i++){
        cin >> a;
        array.push_back(a);
    }

    cout << sortArray(array, n , kthmin);
    return 0;
}
