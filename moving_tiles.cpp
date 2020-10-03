#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the movingTiles function below.
 */


int main()
{
    long l,s1,s2,t;
    double q;
    cin>>l>>s1>>s2>>t ;
    vector<double>ans;
    while(t--)
    {
        cin>>q;
        
   
        ans.push_back( (sqrt(2)*(l-sqrt(q)))/abs(s2-s1)  ) ;
    }
    
   
    for(int i=0;i<ans.size();i++)
    cout<<setprecision(9)<<ans[i]<<endl ;
    return 0;
}