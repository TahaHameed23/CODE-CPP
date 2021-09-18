#include<iostream>
using namespace std;
int main(){

//1.rectangle
    // int row, col;

    // cin>>row>>col;

    // for (int i=1; i<=row; i++){
    //     for(int j=1; j<=col; j++){
    //         cout<<" *";
    
    //     }
    //     cout<<endl;
        
    // }
  
//2. hollow rectangle  

    // for (int i=1; i<=row; i++){
    //     for (int j=1; j<=col; j++){
    //         if (i==1 || i==row || j==1 || j==col){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

//3.Inverted Half-Pyramid

    // int n;
    // cin>>n;
    // for (int i=n; i>=1; i--){
    //     for(int j=1; j<=i; j++){
    //         cout<<" * ";
    //     }
    //     cout<<endl;
    // }


//4.Half pyramid after 180 degree rotation

    // int n;
    // cin>>n;
    // for(int i=1; i<=n; i++ ){
    //     for(int j=1; j<=n; j++){
    //         if(j<=n-i){
    //             cout<<" ";
    //         }else{
    //             cout<<"*";
    //         }
    //     }   

    //    cout<<endl;

    // }
    

//5. Half pyramid using numbers


    // int n;
    // cin>>n;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<i<<" ";
    //     }cout<<endl;
    // }

//6.FLOYD's triangle
//     int n;
//     cin>>n;
//     int count=1;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<count<<" ";
//             count++;
//         }cout<<endl;
//     }

//7.Butterfly pattern

    // int n;
    // cin>>n;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<"*";
    //     }
    //     int space = 2*n-2*i;
    //     for(int j=1; j<=space; j++){
    //         cout<<" ";
    //     }
    //     for(int j=1; j<=i; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;

    // }   //lower part 
    // for(int i=n; i>=1; i--){
    //     for(int j=1; j<=i; j++){
    //         cout<<"*";
    //     }
    //     int space = 2*n-2*i;
    //     for(int j=1; j<=space; j++){
    //         cout<<" ";
    //     }
    //     for(int j=1; j<=i; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;


//8.pyramid
    // int row;
    // cin>>row;
    // int k=0;
    // for (int i=1 ; i<=row; i++, k=0 )
    // {
    //     for(int space=1; space<=(row-i); space++)
    //     {
    //         cout<<" ";
    //     }
    //     while( k != (2*i)-1 )
    //     {
    //        cout<<"*";
    //        k++;
    //     }
        
    //     cout<<endl;
    // } 


//9.Inverted pattern 

    // int n; 
    // cin>>n;
    // for(int i=1; i<=n; i++)
    // {
    //     for(int j=1; j<=n+1-i; j++)
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

//10. 0-1 pattern
    // int n;
    // cin>>n;
    // for(int i=1; i<=n; i++)
    // {
    //     for(int j=1; j<=i; j++)
    //     {
    //         if((i+j)%2==0)
    //         {
    //             cout<<" 1";
    //         }
    //         else{
    //             cout<<" 0";
    //         }
    
            
    //     }
    //     cout<<endl;
    // }


//11.Rhombus pattern

    // int n;
    // cin>>n;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n-i; j++){
    //         cout<<" ";
    //     }
    //     for(int j=1; j<=n; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }


//12.Number pattern

    // int n; 
    // cin>>n;

    // for(int i=1; i<=n-i; i++){
    //     cout<<" ";
    //     for(int j=1; j<=i; j++){
    //         cout<<j<<" ";

    //     }
    //     cout<<endl;
    // }

//13.Palindromic pattern
    
   //to be cntd;


    return 0;
}    
