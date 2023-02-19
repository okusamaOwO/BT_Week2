 #include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a, b ;
    cin >> n;
    int mina = 1000000, minb = 1000000;
    while(n--){
        cin >> a >> b ;
        if(mina>a) mina = a ;
        if(minb>b) minb = b ;
    }
    cout << mina*minb ;
}
