#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b;
    cin>>a;
    cin>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<a+b<<endl;
    string c=a;
    string d=b;
    a[0]=d[0];
    b[0]=c[0];
    cout<<a<<" "<<b<<endl;
    return 0;
}