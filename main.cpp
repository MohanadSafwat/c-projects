#include <iostream>

using namespace std;
char matrix[3][3]={'1','2','3','4','5','6','7','8','9'};
char player='X';
void draw()
{
    cout<<"enter a number from 1 to 9"<<endl;    // 00 01 02
        for(int i=0;i<3;i++)                     // 10 11 12
    {                                            // 20 21 22
        for(int j=0;j<3;j++)
            cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
}
void input()
{
    int n;
    cin>>n;
    if(n==1)
    {
        if(matrix[0][0]=='1')
            matrix[0][0]=player;
        else
        {
            cout<<"this field is already taken "<<endl;
            input();
        }
    }
    else if(n==2)
    {
        if(matrix[0][1]=='2')
            matrix[0][1]=player;
        else
        {
            cout<<"this field is already taken "<<endl;
            input();
        }
    }
     else if(n==3)
    {
        if(matrix[0][2]=='3')
            matrix[0][2]=player;
        else
        {
            cout<<"this field is already taken "<<endl;
            input();
        }
    }
     else if(n==4)
    {
        if(matrix[1][0]=='4')
            matrix[1][0]=player;
        else
        {
            cout<<"this field is already taken "<<endl;
            input();
        }
    }
     else if(n==5)
    {
        if(matrix[1][1]=='5')
            matrix[1][1]=player;
        else
        {
            cout<<"this field is already taken "<<endl;
            input();
        }
    }
     else if(n==6)
    {
        if(matrix[1][2]=='6')
            matrix[1][2]=player;
        else
        {
            cout<<"this field is already taken "<<endl;
            input();
        }
    }
     else if(n==7)
    {
        if(matrix[2][0]=='7')
            matrix[2][0]=player;
        else
        {
            cout<<"this field is already taken "<<endl;
            input();
        }
    }
     else if(n==8)
    {
        if(matrix[2][1]=='8')
            matrix[2][1]=player;
        else
        {
            cout<<"this field is already taken "<<endl;
            input();
        }
    }
     else if(n==9)
    {
        if(matrix[2][2]=='9')
            matrix[2][2]=player;
        else
        {
            cout<<"this field is already taken "<<endl;
            input();
        }
    }
}
void toggle ()
{
    if(player=='X')
        player='O';
    else
    player='X';
}
char win()
{
    if(matrix[0][0]=='X'&&matrix[0][1]=='X'&&matrix[0][2]=='X')
        return 'X';
    if(matrix[1][0]=='X'&&matrix[1][1]=='X'&&matrix[1][2]=='X')
        return 'X';
    if(matrix[2][0]=='X'&&matrix[2][1]=='X'&&matrix[2][2]=='X')
        return 'X';
    if(matrix[0][0]=='X'&&matrix[1][0]=='X'&&matrix[2][0]=='X')
        return 'X';
    if(matrix[0][1]=='X'&&matrix[1][1]=='X'&&matrix[2][1]=='X')
        return 'X';
    if(matrix[0][2]=='X'&&matrix[1][2]=='X'&&matrix[2][2]=='X')
        return 'X';
    if(matrix[0][0]=='X'&&matrix[1][1]=='X'&&matrix[2][2]=='X')
        return 'X';
    if(matrix[0][2]=='X'&&matrix[1][1]=='X'&&matrix[2][0]=='X')
        return 'X';


    if(matrix[0][0]=='O'&&matrix[0][1]=='O'&&matrix[0][2]=='O')
        return 'O';
    if(matrix[1][0]=='O'&&matrix[1][1]=='O'&&matrix[1][2]=='O')
        return 'O';
    if(matrix[2][0]=='O'&&matrix[2][1]=='O'&&matrix[2][2]=='O')
        return 'O';
    if(matrix[0][0]=='O'&&matrix[1][0]=='O'&&matrix[2][0]=='O')
        return 'O';
    if(matrix[0][1]=='O'&&matrix[1][1]=='O'&&matrix[2][1]=='O')
        return 'O';
    if(matrix[0][2]=='O'&&matrix[1][2]=='O'&&matrix[2][2]=='O')
        return 'O';
    if(matrix[0][0]=='O'&&matrix[1][1]=='O'&&matrix[2][2]=='O')
        return 'O';
    if(matrix[0][2]=='O'&&matrix[1][1]=='O'&&matrix[2][0]=='O')
        return 'O';

    return 'D';
}
int main()
{
    int n=0;
    while(1)
    {
        n++;
        draw();
        input();
        if(win()=='X')
        {
            cout<<"X wins"<<endl;
            break;
        }
        else if (win()=='O')
        {
            cout<<"O wins"<<endl;
            break;
        }
        else if (win()=='D'&&n==9)
        {
            cout<<"DRAW"<<endl;
            break;
        }
        toggle();

    }

    return 0;
}
