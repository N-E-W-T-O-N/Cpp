#include<iostream>
#include<vector>
using namespace std ;
int main()
{
    int n;
    cin>>n ;

    vector< int > a(n) , b(n) ;
    
    for(int i:a)
        cin>>a[i]  ;
        
    for(int i:a)
        cin>>b[i]  ;    
    int  count = 0 ;
    for(int c=0 ; c<n-1 ; c++)
    {
        if( a[c]==a[c+1] ) //in x axis
            count +=  abs(b[c+1] - b[c])   ;
        else if ( b[c]==b[c+1] ) 
            count +=  abs(a[i+1] - a[i] ) ;
        else //digonal move 
        {
            if(c==n-2) // last 
            count+=( abs(b[c+1] - b[c]) + abs(a[c+1] - a[c] ) )  ;
        }    
    } 
    cout << count ;
}