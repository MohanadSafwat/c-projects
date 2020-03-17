#include <iostream>
#include<ctime>
#include<cstdlib>

using namespace std;
const int rows =10;
const int elements =10;
int matrix [rows][elements];
int maxShips=10;
void Clear()
{
 for (int i=0;i<rows;i++)
 {
     for(int j=0;j<elements;j++)
     {
         matrix[i][j]=0;
     }
 }
}
void show()
{
 for (int i=0;i<rows;i++)
 {
     for(int j=0;j<elements;j++)
     {
        cout<< matrix[i][j]<<" ";
     }
     cout<<endl;
 }
}
void setShips()
{
    int s=0;

    while (s<maxShips)
    {
        int x =rand()%10;
        int y =rand()%10;
        if(matrix[x][y] !=1)
        {
            s++;
            matrix[x][y]=1;
        }

    }


}
int numberOfShips()
{
    int N =0;
   for (int i=0;i<rows;i++)
 {
     for(int j=0;j<elements;j++)
     {

         if(matrix[i][j]==1)
            N++;
     }

 }
 return N;
}
bool co (int x,int y)
{
    if(matrix[x][y]==1)
        {matrix[x][y]=2;
        return true;}
        return false;
}
int main()
{
    srand (time(NULL));
    char ch;
    int pos1,pos2;
    Clear();
    setShips();
    while(numberOfShips()!=0)
    {
        cout<<"enter two positions :"<<endl;
        cin>>pos1>>pos2;
        if(co(pos1,pos2))
            {cout<<"congrats u got me "<<endl;
            cout<<"number of ships is :"<<numberOfShips()<<endl;}
        else cout<<"try again"<<endl;
        cout<<"if u want to complete enter y else enter n "<<endl;
        cin>>ch;
        if(ch=='n'|| ch=='N')
        {
            cout<<"game over"<<endl;
            show();
            break;
        }
    }
    cout<<"well done dude"<<endl;
    return 0;
}
