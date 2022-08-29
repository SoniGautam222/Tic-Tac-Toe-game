
#include<stdio.h>
#include<conio.h>
void check(char,char);
char a[9]={'1','2','3','4','5','6','7','8','9'};
void game()
{
printf("\n\t\t Tic Tac Toe Game with Soni Gautam  ");
printf("\n\t\t-----------------------------------  \n");
}
void show()
{
printf("\n\n\n\n\n\t\t\t---|---|---\n");
printf("\t\t\t %c | %c | %c \n",a[0],a[1],a[2]);
printf("\t\t\t---|---|---\n");
printf("\t\t\t %c | %c | %c \n",a[3],a[4],a[5]);
printf("\t\t\t---|---|---\n");
printf("\t\t\t %c | %c | %c \n",a[6],a[7],a[8]);
printf("\t\t\t---|---|---\n");
}
void input()
{
printf("\n Player 1 symbol :x ");
printf("\n Player 2 symbol :0 \n");
}
void start()
{
char pa;
printf("\n Enter who will start the game: player 1 or player 2\n");
scanf("%c",&pa);
}
int count=0;

void play()
{
char p,s;
printf("\n Enter position and symbol \n");
fflush(stdin);
scanf("%c",&p);
fflush(stdin);
scanf("%c",&s);
count++;
check(p,s);
}
void check(char P,char S)
{
  int i;
  for(i=0;i<=8;i++)
   {
   if(a[i]==P)
     {
      a[i]=S;
     }
   }
}
int win()
{
if((a[0]=='x'&&a[1]=='x'&&a[2]=='x') || (a[0]=='x'&&a[3]=='x'&&a[6]=='x') || (a[0]=='x'&&a[4]=='x'&&a[8]=='x') )
  return(100);
else if((a[0]=='0'&&a[1]=='0'&&a[2]=='0') || (a[0]=='0'&&a[3]=='0'&&a[6]=='0') || (a[0]=='0'&&a[4]=='0'&&a[8]=='0') )
  return(200);
else if(a[1]=='x'&&a[4]=='x'&&a[7]=='x')
 return(100);
else if(a[1]=='0'&&a[4]=='0'&&a[7]=='0')
 return(200);
else if(a[2]=='x'&&a[5]=='x'&&a[8]=='x')
 return(100);
else if(a[2]=='0'&&a[5]=='0'&&a[8]=='0')
 return(200);
else if(a[3]=='x'&&a[4]=='x'&&a[5]=='x')
 return(100);
else if(a[3]=='0'&&a[4]=='0'&&a[5]=='0')
 return(200);
else if(a[2]=='x'&&a[4]=='x'&&a[6]=='x')
 return(100);
else if(a[2]=='0'&&a[4]=='0'&&a[6]=='0')
 return(200);
else if(a[6]=='x'&&a[7]=='x'&&a[8]=='x')
 return(100);
else if(a[6]=='0'&&a[7]=='0'&&a[8]=='0')
 return(200);

 return(300);



}
int main()
{
int s;
char ch;
labell:
game();
show();
input();
start();
play();

label:
show();
play();
s=win();

show();
if(count<9)
{
   if(s==100)
   {
    printf("\nplayer 1st win");
    count=0;
    }
   else if(s==200)
   {
    printf("\nplayer  2nd win");
    count=0;
    }
   else
  goto label;
}
else
{
printf("\n Game Draw! ");
count=0;
}

printf("\ndo you want to play continue ? y for YES and n for NO ");
fflush(stdin);
scanf("%c",&ch);
if(ch=='y' || ch=='Y')
 {
 a[0]='1';
 a[1]='2';
 a[2]='3';
 a[3]='4';
 a[4]='5';
 a[5]='6';
 a[6]='7';
 a[7]='8';
 a[8]='9';
 goto labell;
 }
else
{
printf("Enter any key to exit");
}
getch();
}

