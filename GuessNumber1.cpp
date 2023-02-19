#include<bits/stdc++.h>
using namespace std;
int creatSecretNumber(){
    int n = rand()%100;
    return n;
}
int EnterYourGuess(){
    cout <<"Enter Your Guess: " ;
    int n ;
    cin >> n;
    return n ;
}
void Processing(int GuessedNumber,int SecretNumber){
    if(GuessedNumber > SecretNumber) cout <<"Too large"<<endl ;
    else if(GuessedNumber < SecretNumber) cout <<"Too small"<<endl;
}
bool WinGame(int GuessedNumber,int SecretNumber){
    return(GuessedNumber == SecretNumber);
}
int main(){
    // code GuessIt
    srand(time(0));
    int SecretNumber = creatSecretNumber();
    int GuessedNumber ;
    do{
        GuessedNumber = EnterYourGuess();
        Processing(GuessedNumber, SecretNumber);
    }
    while(!WinGame(GuessedNumber, SecretNumber));
    if(WinGame) cout <<"You Win!!" ;

}
