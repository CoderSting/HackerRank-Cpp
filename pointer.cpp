#include <iostream>
#include <cstdio>

using namespace std;

void update(int *a,int *b) {
    (*a)=(*a)+(*b);
    (*b)=2*(*b)-(*a);
    if (*b<0)
    (*b)=0-(*b);
        
}

int main() {
    int a, b;
    cin>>a>>b;
    int *pa = &a, *pb = &b;
    
    update(pa, pb);
    cout<<a<<"\n"<<b;

    return 0;
}
