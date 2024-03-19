#include "conio.h"
#include "windows.h"
#include<bits/stdc++.h>
using namespace std;

int vs(int n)
{
    if(n==1 || n==3)
    {
        cout<<"   _____  _    _  __  ____  ___"<<endl;
        cout<<"  (_   _)( (__) )(  )(  __)/  _)"<<endl;
        cout<<"    | |   ) __ (  )(  )  _)| _)"<<endl;
        cout<<"    |_|  (_(  )_)(__)(____)|_|"<<endl;
    }
    else if(n==2 || n==4)
    {
        cout<<" ____   __   __    __   ___  ____"<<endl;
        cout<<"(  _ \\ /  \\ / /   (  ) / __)(  __)"<<endl;
        cout<<" ) __/( () )\\ \\__  )( ( (__  )  _)"<<endl;
        cout<<"(__)   \\__/ (____)(__) \\___)(____)"<<endl;
    }
    if(n<3)
    {
        cout<<"                           __    __  __  __ _   _"<<endl;
        cout<<"                          \\  \\/\\/  /(  )(  ( \\ / \\"<<endl;
        cout<<"                           \\      /  )( /    / \\_/"<<endl;
        cout<<"                            \\_/\\_/  (__)\\_)__)  o"<<endl;
    }
}

int rt=0;
int game(int player)
{

    bool ok=false,v=false;
    int i,j,b=3,x=21,y=16,a=21;
    char m[25][20],z=char(219);
    for(i=0; i<25; i++)
        for(j=0; j<20; j++)
            m[i][j]=' ';
    for(i=0; i<25; i++)
    {
        m[i][0]=z;
        m[i][19]=z;
    }
    for(j=0; j<20; j++)
    {
        m[0][j]=z;
        m[24][j]=z;
    }
    for(j=0; j<3; j++)
    {
        m[2][2+j]=z;
        m[2][9+j]=z;
        m[2][15+j]=z;
        m[6][1+j]=z;
        m[6][16+j]=z;
        m[9][7+j]=z;
        m[9][10+j]=z;
        m[12][1+j]=z;
        m[12][16+j]=z;
        m[14][5+j]=z;
        m[14][12+j]=z;
        m[16][3+j]=z;
        m[16][14+j]=z;
        m[20][5+j]=z;
        m[20][12+j]=z;
        m[22][2+j]=z;
        m[22][9+j]=z;
        m[22][15+j]=z;
        m[0+j][8]=z;
        m[0+j][11]=z;
        m[2+j][6]=z;
        m[2+j][13]=z;
        m[6+j][5]=z;
        m[6+j][14]=z;
        m[8+j][3]=z;
        m[8+j][16]=z;
        m[16+j][3]=z;
        m[16+j][16]=z;
        m[22+j][2]=z;
        m[22+j][4]=z;
        m[22+j][8]=z;
        m[22+j][11]=z;
        m[22+j][15]=z;
        m[22+j][17]=z;
        m[16][7+j]=z;
        m[16][10+j]=z;
    }
    for(i=0; i<2; i++)
    {
        m[2+i][2]=z;
        m[2+i][17]=z;
        m[5+i][3]=z;
        m[5+i][16]=z;
        m[11+i][9]=z;
        m[11+i][10]=z;
        m[13+i][5]=z;
        m[13+i][14]=z;
        m[18+i][6]=z;
        m[18+i][13]=z;
        m[20][3+i]=z;
        m[20][15+i]=z;
        m[9][2+i]=z;
        m[9][16+i]=z;
        m[8][9+i]=z;
        m[6][5+i]=z;
        m[6][13+i]=z;
        m[4][5+i]=z;
        m[4][13+i]=z;
        m[19][9+i]=z;
        m[18][9+i]=z;
        m[11][6+i]=z;
        m[11][12+i]=z;
        m[6][9+i]=z;
        m[5][8+i]=z;
        m[5][10+i]=z;
        m[15][9+i]=z;
    }
    m[a][b]='T';
    m[x][y]='P';
    m[1][9]='$';
    m[1][10]='$';
    m[23][9]='A';
    m[23][10]='I';
    m[22][6]=z;
    m[22][13]=z;

    system("color 2");
    v=false;
    ok=false;
    system("cls");
    cout<<"\n\n\n\n\n\n\n                             1\n";
    Sleep(1000);
    system("cls");
    cout<<"\n\n\n\n\n\n\n                             2\n";
    Sleep(1000);
    system("cls");
    cout<<"\n\n\n\n\n\n\n                             3\n";
    Sleep(1000);
    system("cls");
    cout<<"\n\n\n\n\n\n\n                            GO!\n";
    Sleep(500);
    system("cls");
    cout<<"                  ";
    for(i=0; i<25; i++)
    {
        for(j=0; j<20; j++)
        {
            cout<<m[i][j];
        }
        cout<<endl<<"                  ";
    }

    while(v==false)
    {
        int n = _getch();

        system("cls");
        if(player==0)
        {
            if(n=='d' && m[a][b+1]==' ')
            {
                swap(m[a][b],m[a][b+1]);
                b++;
            }
            if(n=='a' && m[a][b-1]==' ')
            {
                swap(m[a][b],m[a][b-1]);
                b--;
            }
            if(n=='w' && m[a-1][b]==' ')
            {
                swap(m[a][b],m[a-1][b]);
                a--;
            }
            if(n=='s' && m[a+1][b]==' ')
            {
                swap(m[a][b],m[a+1][b]);
                a++;
            }
            if(n==77 && m[x][y+1]==' ')
            {
                swap(m[x][y],m[x][y+1]);
                y++;
            }
            if(n==75 && m[x][y-1]==' ')
            {
                swap(m[x][y],m[x][y-1]);
                y--;
            }
            if(n==72 && m[x-1][y]==' ')
            {
                swap(m[x][y],m[x-1][y]);
                x--;
            }
            if(n==80 && m[x+1][y]==' ')
            {
                swap(m[x][y],m[x+1][y]);
                x++;
            }
        }
        else if(player==1)
        {
            if(n==77 && m[a][b+1]==' ')
            {
                swap(m[a][b],m[a][b+1]);
                b++;
            }
            else if(n==75 && m[a][b-1]==' ')
            {
                swap(m[a][b],m[a][b-1]);
                b--;
            }
            else if(n==72 && m[a-1][b]==' ')
            {
                swap(m[a][b],m[a-1][b]);
                a--;
            }
            else if(n==80 && m[a+1][b]==' ')
            {
                swap(m[a][b],m[a+1][b]);
                a++;
            }
            else if(b>y && m[x][y+1]==' ')
            {
                swap(m[x][y],m[x][y+1]);
                y++;
            }
            else if(a<x && m[x-1][y]==' ')
            {
                swap(m[x][y],m[x-1][y]);
                x--;
            }
            else if(a>x && m[x+1][y]==' ')
            {
                swap(m[x][y],m[x+1][y]);
                x++;
            }
            else if(b<y && m[x][y-1]==' ')
            {
                swap(m[x][y],m[x][y-1]);
                y--;
            }
        }
        else if(player==2)
        {
             if(n==77 && m[x][y+1]==' ')
            {
                swap(m[x][y],m[x][y+1]);
                y++;
            }
            else if(n==75 && m[x][y-1]==' ')
            {
                swap(m[x][y],m[x][y-1]);
                y--;
            }
            else if(n==72 && m[x-1][y]==' ')
            {
                swap(m[x][y],m[x-1][y]);
                x--;
            }
            else if(n==80 && m[x+1][y]==' ')
            {
                swap(m[x][y],m[x+1][y]);
                x++;
            }
            if(ok==false)
            {

            }
        }
        if((a<3 && (b==7 || b==11))||(a==3 &&(b==8 || b==9 ||b==10)))
        {
            m[1][10]='X';
            m[1][9]='X';
            ok=true;
        }
        if(abs(a-x)+abs(y-b)==1)
        {
            vs(2);
            Sleep(5000);
            v=true;
        }

        if(((a==21 && (b==8 || b==9 || b==11 || b==10))||(a==23 || a==22) && (b==7 || b==12))&&ok==true)
        {
            vs(1);
            Sleep(5000);
            v=true;
        }

        if(v==false)
        {
            cout<<"                  ";
            for(int i=0; i<25; i++)
            {
                for(int j=0; j<20; j++)
                {
                    cout<<m[i][j];
                }
                cout<<endl<<"                  ";
            }
        }
    }
}

int bot()
{
    int switcher=1;
     while(rt==0)
    {
        system("cls");
        switch(switcher)
        {
        case 1:
            cout<<"=====================Thief and Police=====================\n\n\n\n\n                      >>   THIEF   <<\n                         POLICEMAN\n                           BACK!";
            break;
        case 2:
            cout<<"=====================Thief and Police=====================\n\n\n\n\n                           THIEF \n                      >> POLICEMAN <<\n                           BACK!";
            break;
        case 3:
            cout<<"=====================Thief and Police=====================\n\n\n\n\n                           THIEF\n                         POLICEMAN\n                      >>   BACK!   <<";
            break;
        }
        int choice = _getch();
        if(choice == 72)
            if(switcher!=1)
                switcher--;
            else
                switcher=3;
        if(choice == 80)
            if(switcher!=3)
                switcher++;
            else
                switcher=1;
        if(choice == 13 || choice == 32)
        {
            if(switcher == 1)
                game(1);
            if(switcher == 2)
                game(2);
            else if(switcher==3)
                return 1;
        }
    }
}

int menu(int switcher)
{
    system("color 2");
    while(rt==0)
    {
        system("cls");
        switch(switcher)
        {
        case 1:
          cout<<"=====================Thief and Police=====================\n\n\n\n\n                      >> 1-PLAYERS <<\n                         2-PLAYERS\n                           EXIT!";
            break;
        case 2:
            cout<<"=====================Thief and Police=====================\n\n\n\n\n                         1-PLAYERS \n                      >> 2-PLAYERS <<\n                           EXIT!";
            break;
        case 3:
            cout<<"=====================Thief and Police=====================\n\n\n\n\n                         1-PLAYERS\n                         2-PLAYERS\n                      >>   EXIT!   <<";
            break;
        }
        int choice = _getch();
        if(choice == 72)
            if(switcher!=1)
                switcher--;
            else
                switcher=3;
        if(choice == 80)
            if(switcher!=3)
                switcher++;
            else
                switcher=1;
        if(choice == 13 || choice == 32)
        {
            if(switcher == 1)
                bot();
            if(switcher == 2)
                game(0);
            else if(switcher==3)
                    return 0;
        }
    }
}

int main()
{
    system("title Thief-and-Policeman");
    system("mode con cols=58 lines=28");
        vs(3);
        cout<<"        ___   __ _  ____"<<endl;
        cout<<"       / _ \\ (  ( \\(    \\"<<endl;
        cout<<"      /  _  \\/    / ) D |"<<endl;
        cout<<"      \\_/ \\_/\\_)__)(____/"<<endl;
        vs(4);
        cout<<"               Loading..."<<endl;
        cout<<"                 Developed by Rahimov Jamshed.";
    for(int i=0; i<11; i++)
    {
        if(i==0)
            system("color ");
        if(i==1)
            system("color 1");
        if(i==2)
            system("color 2");
        if(i==3)
            system("color 3");
        if(i==4)
            system("color 4");
        if(i==5)
            system("color 5");
        if(i==6)
            system("color 6");
        if(i==7)
            system("color 7");
        if(i==8)
            system("color 8");
        if(i==9)
            system("color 9");
        if(i==10)
            system("color ");
        Sleep(200);
    }
    menu(1);
}
