#include <iostream>
using namespace std;

void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int mn= i;

        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[mn])
                mn = j;
        }

        if(mn!=i){
            int temp = arr[i];
            arr[i] = arr[mn];
            arr[mn] = temp;
        }

    }
}

int main() {
    int arr[] ={64, 25, 12, 22, 11};
    int n=sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr, n);

    cout<<"Sorted array: ";
    for (int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }


    return 0;
}

// time complexity: O(n²)
// space complexity: O(1)

