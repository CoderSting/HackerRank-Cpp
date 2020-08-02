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
    int n;
    cin>>n;
    vector <int> ar;
    for (int i=0; i<n; i++){
        int a;
        cin>>a;
        ar.push_back(a);
    } 
    sort(ar.begin(),ar.end());
    display_vector(ar);
    return 0;
}
