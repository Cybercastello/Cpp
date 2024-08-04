#include<iostream>
using namespace std;
struct node{
    int num;
    node *ptr;
};
node Node;
class lin
{
    node*head,*first,*temp;
    int count, choice;
    public:
    void insert();
    void output();
    lin()
    {
        count=0;
        choice=1;
        first=NULL;
    }
};
int main()
{
    lin l;
    l.insert () ;
    l.output();
}
 void lin::insert()
 {
     while(choice){
         head=new node;
         cout<<"enter the item";
         cin>>head->num;
         if(first!=NULL)
         {
             temp->ptr=head;
             temp=head;
         }
         else{
         first=temp=head;
         }
         cout<<"do you want to continue(1/0)";
         cin>>choice;
         }
         }
         void lin::output()
         {
             temp->ptr=NULL;
             cout<<endl<<"status of list is";
             while(temp!=NULL)
             {
                 cout<<endl<<temp->num;
                 count++;
                 temp=temp->ptr;
             }
             cout<<"number of nodes in list"<<count;
         }