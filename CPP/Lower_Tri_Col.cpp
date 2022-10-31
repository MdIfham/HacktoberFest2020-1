#include<iostream>
using namespace std;

class upper
{
    int *a;
    int n;
public:
   upper()
     { n=2;
       a=new int[2*(2+1)/2]; }
    upper(int n)
    {   this->n=n;
        a=new int[n*(n+1)/2];    }
    ~upper()
    {   delete []a; }    
 
void set(int i, int j, int x)
{   if(i>=j)
    a[n*(j-1) - (j-2)*(j-1)/2 + (i-j)] = x;
}

int Get(int i, int j)
{   if(i>=j)
    return a[n*(j-1) - (j-2)*(j-1)/2 + (i-j)];
    else 
    return 0;
}

void print()
{
    for(int i=1;i<=n;++i){

        for(int j=1;j<=n;++j){
              if(i>=j)  cout<<a[n*(j-1) - (j-2)*(j-1)/2 + (i-j)]<<" ";
              else    cout<<0<<" ";
        }
        cout<<'\n';
    }
}

};

int main(){ system("cls");
    int d,x;
    cout<<"Enter dimensions: ";  cin>>d;
    upper m(d);
    cout<<"Enter all elements:\n";
    for(int i=1;i<=d;++i){

        for(int j=1;j<=d;++j){
               cin>>x;
               m.set(i,j,x);
        }
    }
    printf("\n\n");
    m.print();
return 0; }