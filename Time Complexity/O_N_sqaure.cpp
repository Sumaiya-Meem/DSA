#include<bits/stdc++.h>
using namespace std;
int main(){
     int n,a; cin>>n;

     for(int i=0;i<=n;i++){  //O(n)
          for(int j=n;j>i;j--){  //O(n)
                  cout<<a+i+j<<endl;    
       }
     }
     // O(N) * O(N) = O(N*N)
     
}