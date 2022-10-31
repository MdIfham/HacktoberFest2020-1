#include<iostream>
using namespace std;

class diagonal
{
    int *a;
    int n;
    public:
      diagonal()
      { this->n=2;
        a=new int[n];}
      
      diagonal(int n)
      {
          this->n=n;
          a=new int[n];
      }

     ~diagonal()
     {
         delete []a;
     }

     void display();
     void set(int i,int j,int x);
     int Get(int i,int j);
     int GetSize(){ return n;}
};

void diagonal::display()
{   int i,j;
    for(i=0;i<n;i++)
   {  for(j=0;j<n;j++)
     {
         if(i==j)
          cout<<a[i]<<' ';
          else 
          cout<<0<<' ';
     }
      cout<<'\n';}
}

void diagonal::set(int i,int j,int x)
{
    if(i==j)
    a[i-1]=x;
}

int diagonal::Get(int i, int j){
    if(i==j)
    cout<<a[i- 1]<<'\n';
    else 
    cout<<0<<'\n';

}

int main(){ system("cls");
    diagonal d(5);

    d.set(1,1,4);
    d.set(2,2,6);
    d.set(3,3,8);
    d.set(4,4,10);
    d.set(5,5,12);

    d.Get(3,3);

    d.display();



return 0; }