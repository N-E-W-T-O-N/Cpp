#include <bits/stdc++.h>
using namespace std;
vector<string> split_string(string);

// Complete the libraryFine function below.
int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2) {
int fine ;

if (y1>y2)//return after a year 
    fine =10000 ;
else if (y1<y2)
    fine = 0 ;    
else
{
    if(m1>m2) //after a month
        fine=500*(m1-m2);
    else if(m1<m2)
        fine=0 ;
    else
    {
        if(d1>d2)
            fine=15*(d1-d2)  ;
        else  fine = 0 ;    
    }        
}


return fine ;
}

int main()
{
    int r[3] ;
    int due[3] ;
    cin>>r[0]>>r[1]>>r[2]      ;
    cin>>due[0]>>due[1]>>due[2];
    
    int result = libraryFine( r[0] ,r[1] , r[2] , due[0] , due[1] , due[2] );

    cout << result << "\n";
    return 0;
}

