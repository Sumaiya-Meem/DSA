#include<bits/stdc++.h>
using namespace std;
int main(){

    int n = 20;                    //  O(1)
    int sum = (n*(n+1))/2;         //  O(1)
    if(sum%2 == 0)                 // O(1)
    { 
        cout << "EVEN";            // O(1)
    }
    else
    {
        cout << "ODD";            //O(1)
    }
    // Total: O(1)
}