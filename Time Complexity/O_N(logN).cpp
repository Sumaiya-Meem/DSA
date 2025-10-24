
#include<bits/stdc++.h>
using namespace std;
int main(){
   int i,j,n,k=0;

    for(i = n/2;i<=n;i++)      //O(N/2) = O(N) 
    {
        for(j=2;j<=n;j*=2)    //  O(log2N) = O(logN) 
        {
            k = k+n/2;
        }
    }
     // O(N) * O(logN) = O(NlogN)  
}