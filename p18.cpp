// E
// E D
// E D C
// E D C B
// E D C B A
// *******PART-1***********
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
char ch='A';
cout<<char(ch+n-j)<<" ";
      }
      cout<<endl;
    }
}

// ******PART-2************  
// E 
// D E 
// C D E  
// B C D E  
// A B C D E  

#include <bits/stdc++.h>
using namespace std;

int main()
{
      int n;cin>>n;
      for(int i=1;i<=n;i++){
          char ch =('A'+n)-i;
          for(int j=1;j<=i;j++){
              cout<<ch<<" ";
              ch++;
          }
          
          
          cout<<endl;
      }
}
