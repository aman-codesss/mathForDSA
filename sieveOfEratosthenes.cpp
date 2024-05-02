#include<iostream>
#include<vector>
using namespace std;
void countPrime(int n){
   vector<bool> isPrime(n+1,true);
   isPrime[0] =isPrime[1]=false;
   int c=0;
    for(int i =2;i<n;i++){
        if(isPrime[i]){
            c++;
        }
        for(int j=2*i;j<n;j+=i){
            isPrime[j]=0;
        }
        
    }
    cout<<"The total prime numbers below given range is: "<<c<<endl;
}
int main(){
    int n;
    cout<<"Enter the range of number: ";
    cin>>n;
    countPrime(n);


}