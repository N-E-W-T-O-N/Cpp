#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    unsigned int n ,q, t,x ;
    cin>>n ;
    vector<int> a(n) ;
    for(int i=0; i<n ; i++)
    cin>>a[i] ;
    
    sort(a.begin(),a.end()) ;
    cin>>q;
    vector<int>::iterator low ;
    
    while(q--){
    cin>>t ;
    low=std::lower_bound (a.begin(), a.end(), t); //
    x=low- a.begin() ;
    
    if(a[x]==t)
        cout<<"Yes " ;
    else
        cout<<"No ";
    cout<< (x+1) << '\n';
    }
  return 0;
}