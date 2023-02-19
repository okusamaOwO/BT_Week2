#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = -10000 ;
    int temp ;
    do{
        temp = n;
        cin >> n;
        if(temp == n){
            continue;
        }
        cout << n <<" ";
    }
    while(n >= 0);
}
