#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std ;
int main()
{
    int n , m;
    //cout<<"n\n";
    cin>>n ;
    vector <int > arr(n) ;
    map<int,int> x ;

    for(int i =0 ; i<n ; i++)
        {
        cin>>arr[i] ;
        x[arr[i]]++ ;
        }

    /*for( map<int ,int>::iterator it = x.begin() ; it!=x.end() ; ++it )
    {
        cout<<it->first<<" "<<it->second<<"\n" ;
    } */   

    //cout<<"m\n" ;
    cin >> m;
    vector <int > brr(m)  ;
    map<int,int> y ;
    for(int i =0 ; i<m ; i++)
        {
        cin>>brr[i] ;
        y[brr[i]]++ ; 
        }
    /*for( map<int ,int>::iterator it = y.begin() ; it!=y.end() ; ++it )
    {
        cout<<it->first<<" "<<it->second<<"\n" ;
    } */ 

    vector <int> result ;
    for(map<int ,int>::iterator it = y.begin()  ; it!=y.end() ; it++ )
    {
    if(count(arr.begin(),arr.end(),it->first)==0)     //Element not in arr
       result.push_back(it->first )  ;
    else if(count(arr.begin(),arr.end(),it->first)!=count(brr.begin(),brr.end(),it->first))
       result.push_back(it->first ) ;
    }
    sort(result.begin() , result.end() ) ;
    for(auto q:result)
        cout<<q<<" " ;
     /*
    for(int i = 0 , j=0 ;i<n && j<m ;i++ , j++)
    {
        if(arr[i] != brr[j])
            {
            if(count[brr[j]]==0)
                {
                    cout<<brr[j]<<" ";
                    count[brr[j]]++ ;
                    j++;
                }
            }
    }
    */
    return 0;
}