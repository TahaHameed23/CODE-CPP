#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i;

    for ( i=2; i<n; i++){
        if (n%i==0){
            cout<<"This is a Non-Prime Number"<<endl;
            break;

        }
    }
    if (i==n){

    
cout<<"This is a Prime Number"<<endl;
    }
    return 0;

}