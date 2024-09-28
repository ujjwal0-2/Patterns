#include <bits/stdc++.h>
using namespace std;

int main() 
{

 for(int i=0;i<3;i=i+1){
     if(i==0 || i==2){
          for(int j=0 ; j<5; j=j+1){
              cout << "* ";
          }
     }
     else{
         cout<<"* ";
         for(int j=0 ; j<3;j=j+1){
             cout<<"  ";
         }
         cout<<"* ";
     }
    cout<<endl;
 
 }
 
}
