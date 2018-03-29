#include "TicTacToeGame.h"
#include<iostream>
#include<string>
using namespace std;

void TicTacToeGame::playthegame(){

    welcome();

    int player;
    char player1='X';
    char player2='0';
    char currentplayer=player1;
    int chances=0;
    bool gameisdone = false;
    int x,y;
    while(gameisdone==false)
    {    printboard();
         player=((chances+1)%2==1)? 1:2 ;
         cout<<"player "<<player <<" move\n";
         x=givingxcoord();
         y=givingycoord();
         if(placemarker(x,y,currentplayer)==false)
         {
           cout<<"SORRY Place already occupied!!";

         }

         else
        {    chances++;
            if(checkwin(currentplayer)==true)
            {   printboard();
                cout<<"\nhey there, game is Over!!! Player " << player<<"has won Congrats!!!!\n";
                gameisdone=true;
            }
            else if(chances==9)
            {   printboard();
             cout<<"\nhey there, game is TIE!!! \n";
               gameisdone=true;
            }


             //switching of players
             if(currentplayer==player1)
                currentplayer=player2;
             else
                currentplayer=player1;
         }



    }


}

TicTacToeGame::TicTacToeGame()      //constructer
{
   clearboard();
}

int TicTacToeGame::givingxcoord(){
  int x;
  bool validmove=false;
  while(validmove==false){
  cout<<"Enter the  X coordinate : ";
  cin>>x;
  if(x<1||x>3)
   {cout<<"Invalid X coordinate!!!\n";

   }
  else
  {
  validmove=true;

  }
  }
   return x-1;
}
int TicTacToeGame::givingycoord()
{
  int y;
  bool validmove=false;
  while(validmove==false){
  cout<<"Enter the  Y coordinate : ";
  cin>>y;
  if(y<1||y>3)
   {cout<<"Invalid Y coordinate!!!\n";

   }
  else
  {validmove=true;

  }
}
  return y-1;
}
void TicTacToeGame::clearboard(){
   for(int i=0;i<3;i++)
    {
       for(int j=0;j<3;j++)
       {

           board[i][j]=' ';
       }

    }
}

void TicTacToeGame::printboard(){
  cout<<endl;
  cout<<" |1 2 3|\n";
  for(int i=0;i<3;i++)
  {   cout<<" -------\n";
    cout<<i+1;
     for(int j=0;j<3;j++)
     {
         cout<<"|"<<board[i][j];

     }
     cout<<"|";
     cout<<endl;
  }


   cout<<" -------\n";

}

bool TicTacToeGame::placemarker(int x ,int y,char currentplayer)
{
    if(board[x][y]!=' ')
    {return false;
         }
    board[x][y]=currentplayer;
        return true;


}


bool TicTacToeGame::checkwin(char currentplayer)
{   //rows checking
    for(int i=0;i<3;i++)
    {
     if((board[i][0]==currentplayer)&&(board[i][0]==board[i][1])&&(board[i][1]==board[i][2]))
      return true;

    }
     //coloum checking
    for(int i=0;i<3;i++)
    {
     if((board[0][i]==currentplayer)&&(board[0][i]==board[1][i])&&(board[1][i]==board[2][i]))
      return true;

    }

   if((board[0][0]==currentplayer)&&(board[0][0]==board[1][1])&&(board[1][1]==board[2][2]))
      return true;

      if((board[0][2]==currentplayer)&&(board[0][2]==board[1][1])&&(board[1][1]==board[2][0]))
      return true;


      return
      false;
}

void TicTacToeGame::welcome()
{   string name1;
    string name2;

    cout<<"Player 1 Enter your Name\n";
    cin>>name1;
    cout<<"Hey  "<<name1<<" Welcome to my Tic Tac Toe Game\n";
    cout<<name1<<" You are Player 1\n\n";
    cout<<"\nPlayer 2 Enter your name\n";
    cin>>name2;
    cout<<"Hey  "<<name2<<" Welcome to my Tic Tac Toe Game\n";
    cout<<name1<<" You are Player 2\n\n";
    cout<<"\tLets play the Game\n";
}
