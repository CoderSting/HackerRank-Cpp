#include <iostream>
#include <cstdio>
using namespace std;


static const char *list[] = {"one","two","three","four","five",
                                "six","seven","eight","nine"};


int n = 0;
    
int main() 
{
    int a, b,i;
    cin>>a>>b;
    for(i=a;i<=b;i++){
      if (i<=9)
      {
        if (i < 1)
        return 1; 
        if (i >= 1 && i <= 9)
        cout<<list[i-1]<<"\n";
        }
       else 
      {
        if (i % 2 == 0)
        cout<<"even\n";
        else
        cout<<"odd\n";
      }
    }
    return 0;
}
