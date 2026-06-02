#include<iostream>
using namespace std;
int main(){
    int n,reverse,rem;
    cout<<"Enter a number: ";
    cin>>n;
    reverse=0;  
    while(n!=0){
        rem=n%10;
        reverse=reverse*10+rem;
        n/=10;
    }
    cout<<"Reverse of the number: "<<reverse<<endl;
}