#include <bits/stdc++.h>

using namespace std;


static const char *wl[] = {"one","two","three","four","five",
                                "six","seven","eight","nine"};
int main()
{
    int n = 0; int a;
    cin>>a;
    if (a < 1){
        return 1; 
    }
    if (a >= 1 && a <= 9){
        printf("%s",wl[a-1]);
    }
    else{
        printf("Greater than 9");
    }
    return 0;
}

