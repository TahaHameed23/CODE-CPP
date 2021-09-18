#include<iostream>
using namespace std;
int main()
 {
    int n1,n2;
    cout<<"Input two numbers: "<<endl;
    cin>>n1>>n2;

    char op;
    cout<<"Input an operator: ";
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<n1+n2<<endl;
        break;
    case '-':
        cout<<n1-n2<<endl;
        break;
    case '*':
        cout<<n1*n2<<endl;
        break;
    case '/':
        cout<<n1/n2<<endl;
        break;       
    default:
        cout<<"Enter another operator"<<endl;
        break;
    }
    int a = 2 ;
    cout<<&(a);
    return 0;
    }

