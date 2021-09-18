#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
//1.
    // for(int row=1; row<=n; row++){
    //     //for every row, run the col
    //     for(int col=1; col<=row; col++){
    //         cout<<" *";
            
    //     }
    //     //when one row is printed, we need a newline
    //     cout<<endl;
    // }


//2.
    // for(int row=1; row<=n; row++){
    //     for(int col=1; col<=n-row+1; col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;

    // }



//3.

    for(int row=1; row<=2*n-1; row++){
        int c = 0;
        if(row>0){
            cout<<" *"; 
            col++;
        }
        else
            for(int col=n; col<=1; col++){
                cout<<" *";
            }
            cout<<endl;
        }
        cout<<endl;

       
    }
    return 0;
}