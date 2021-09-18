#include<iostream>
using namespace std;
int main() {  
int a,b,c;
cin>>a>>b>>c;

if (a>b){
  if (a>c){
    cout<<"a is largest\n";

  }
  else{
    cout<<"c is largest\n";
  }
}
else{
  if (b>c){
    cout<<"b is largest\n";
  }
  else {

    cout<<"c is largest\n";
  }
}


  return 0;
}