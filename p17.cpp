//    A
//   ABA
//  ABCBA
// ABCDCBA
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char ch='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
cout<<" ";
        }
       int b=(2*i+1)/2;
          for(int j=1;j<=2*i-1;j++){

if(j<=b)ch--;
else ch++;
cout<<char(ch+1);

        }

        cout<<"\n";

    }
}