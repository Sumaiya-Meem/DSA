#include <iostream>
using namespace std;

int partition(int a[],int l,int h){
    int pivot = a[(l+h)/2];
    int i = l;
    int j = h;

    while(i <= j){
        while(a[i]<pivot) i++;
        while(a[j]>pivot) j--;
        if(i <= j){
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
    return i;
}

void quickSort(int a[], int l, int h) {
    if (l < h) {
        int index = partition(a, l, h);
        quickSort(a,l,index - 1);
        quickSort(a,index,h);
    }
}

int main() {
    int a[] = {4, 3, 1, 2, 5, 9, 7, 10, 6};
    int n=sizeof(a)/sizeof(a[0]);

    cout<<"Before sorting: ";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;

    quickSort(a,0,n - 1);

    cout<<"After sorting: ";
    for(int i=0;i<n;i++)
        cout<<a[i]<< " ";
    cout<<endl;

    return 0;
}
