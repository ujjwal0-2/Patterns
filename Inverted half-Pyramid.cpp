#include <bits/stdc++.h>
using namespace std;

int main() 

{
   int n;
  cin >> n;
 for(int row=0;row<6;row=row+1){
     for(int col=0;col<n-row;col=col+1){
         cout<<"* ";
     }
  cout<<endl;
 }
 
}
