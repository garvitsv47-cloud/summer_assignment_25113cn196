#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of rows"<<endl;
    cin>>n;
    for( int i=n;i>=1;i--){
        for( int j=0;j<=i;j++){
            cout<<char(i+63);
        }
        cout<<endl;
    }
}