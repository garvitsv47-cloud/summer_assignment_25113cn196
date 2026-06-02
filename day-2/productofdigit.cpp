#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int product=1;
    while(n>0){
        int rem = n%10;
        product*=rem;
        n/=10;
    }
    cout<<"Product of digits: "<<product<<endl;
    return 0;
}