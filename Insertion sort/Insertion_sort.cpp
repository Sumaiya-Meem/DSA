#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &a){
    int n = a.size();
    for(int i=0;i<n;i++){
        int temp= a[i];
        int j = i - 1;

        while(j>=0 && a[j]>temp) {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}

int main() {
    vector<int> v = {5, 2, 9, 1, 5, 6};
    insertionSort(v);
    for (int x : v) cout<<x<< ' ';
}

