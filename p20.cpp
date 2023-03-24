// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        * 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    //part1
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        int spaces =2*n-2*i;
        for(int j=1;j<=spaces;j++){
cout<<" ";
        }
for(int j=1;j<=i;j++){
    cout<<"*";
}
        cout<<"\n";
        spaces-=2;
    }
    //part2
      for(int i=1;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        int spaces =2*i;
        for(int j=1;j<=spaces;j++){
cout<<" ";
        }
for(int j=1;j<=n-i;j++){
    cout<<"*";
}
        cout<<"\n";
        spaces+=2;
    }

}