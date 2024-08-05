#include<iostream>
using namespace std;
class linearsearch
{
    int a[100],n,i,item,loc;
    public:
    void in();
    void out();
    linearsearch()
    {
        loc=-1;
        
    }
};
int main()
{
    linearsearch is;
    is.in();
    is.out();
}
void linearsearch::in()
{
    cout<<"enter the no.of elemnts :";
    cin>>n;
    cout<<"entr the no :"<<endl;
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
    }
}
void linearsearch::out()
{
    cout<<"enter the no.to be serach";
    cin>>item;
    for(i=0;i<=n-1;i++)
    {
        if(item==a[i])
        {
            loc=i;
            break;
        }
    }
    if(loc>=0)
    cout<<item<<"is found in position"<<loc+1;
    else
    cout<<endl<<"itm is no exist";
    
}