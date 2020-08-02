#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void display_vector(vector <int> v){
    for (int i=0; i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
}
int main() {
    int n,x,a,b;
    vector <int> arr;
    cin>>n;
    for (int i=0; i<n; i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    cin>>x;
    arr.erase(arr.begin()+(x-1));
    cin>>a>>b;
    arr.erase(arr.begin()+(a-1),arr.begin()+b-1);
    cout<<arr.size()<<endl;
    display_vector(arr);
    return 0;
}
