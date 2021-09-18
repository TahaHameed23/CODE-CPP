//multiple lang. robot 
#include<iostream>
using namespace std;
int main()
{
    char button;
    cout<<"Input a character: ";
    cin>>button;

    // if (button=='a'){
    //     cout<<"Hello"<<endl;
    // }
    // else if (button=='b'){
    //     cout <<"Namaste"<<endl;
    // }
    // else if (button=='c'){
    //     cout<<"Salut"<<endl;
    // }
    // else if (button=='d'){
    //     cout<<"Hola"<<endl;
    // }
    //  else if (button=='e'){
    //      cout<<"Ciao"<<endl;
    // }
    // else {
    //     cout<<"I am still learning more"<<endl;
    // }


//alternative for if-else & used more

    switch (button){
    case 'a':
    cout<<"Hello"<<endl;
    break;

    case 'b':
    cout<<"Namaste"<<endl;
    break;

    case 'c':
    cout<<"Hola"<<endl;
    break;

    case 'd':
    cout<<"Ciao"<<endl;
    break;

    case 'e':
    cout<<"Salut"<<endl;
    break;  

    default:
    cout<<"I am still learning more"<<endl; 
    }



     return 0;
}