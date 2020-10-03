#include <iostream>
using namespace std;
struct  node {int data ;
            node *next;
    
} ;

class link
{
    node *start ;
    public:
    link();
    void input(int i=0);
    void output();
    ~link();
    void reve() ;
};
    
    link::link()
    {
        start=nullptr ;
    }
    
    void link::input(int i)
    {
        node*temp =new node ;
        temp->data=i ;
        temp->next=NULL ;
        if(start!=NULL)
        {
            temp->next=start ;
            start =temp ;
        }
        else 
        {
            temp->next=NULL;
            start=temp ;
        }
    }
    void link::output()
    {
        node *temp;
        temp=start;
        while(temp!=NULL)
        {
            cout<<temp->data << " ";
            temp=temp->next ;
        }
        cout<<endl ;
    }
    link::~link()
    {
        while(start!=NULL)
        {
            node *temp =start ;
            start=start->next ;
            delete temp ;
        }
        cout<<"Done"; 
    }
      
      
    void link::reve()
    {
        cout<<"Reversed\n" ;
        node *prev = NULL ;
        node *p ;
        p=start ;
        
        while(p!=NULL)
        {
            node *temp=p->next;
            p->next = prev;
            prev = p;
            p=temp ;
        }
        while(prev!=NULL)
        {
            cout<<prev->data<<" ";
            prev=prev->next ;
        }
        cout<<endl ;
    }
int main() {
    
    link l;
    l.input(4);
    l.input(8) ;
      l.input(7) ;
        l.input(9) ;
          l.input(1) ;
            l.input(0) ;
              l.input(2) ;
                l.input(5) ;
                  l.input(3) ;
                  l.output();
                  
                  l.reve() ;
	return 0;
}