#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=1,n;
    while(i<n)              
    {
        int j=n;           
        while(j>0)          
        {
            j = j/2;       // second while loop->  O(logN)
        }
        i = i*2;          // first while loop ->  O(logN)
    }  

    // Total: O(logN) * O(logN) = O((logN)*(logN))
}