#include <iostream>
#include"TicTacToeGame.h"
using namespace std;

int main()

{
   cout<<"\n\t This is A 2 Player TicTacToe Game\n";
   cout<<"\tPlayer 1:'X'  Player 2:'0' \n";
   bool playagain =true;
   char ans;
   while(playagain==true)
   {

   TicTacToeGame  play;

   play.playthegame();
   cout<<"Want to Play Agian if Yes press y or Y\n";
   cin>>ans;
   if(ans=='y'||'Y')
    playagain=true;
   else
    playagain=false;
   }
    return 0;
}
