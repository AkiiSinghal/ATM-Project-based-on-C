#include<stdio.h>
#include<conio.h>
#include<dos.h>
int i;
void star()
{
gotoxy(1,7);
for(i=1;i<81;i++)
printf("*");
gotoxy(1,21);
for(i=1;i<81;i++)
printf("*");
for(i=8;i<21;i++)
{
 gotoxy(1,i);
 printf("!");
 gotoxy(80,i);
 printf("!");
}
}
void main()
{
struct detial
{
 char name[20];
 int an;
}d1={"Akshat Singhal",12345},d2={"Akash Gupta",12346},d3={"Abhishek Pratap",12347},d4;
int n,ch,a,b=0,h,d=0;
int e,f=0,g,x,q,s,t=5;
char c;
struct date dt;
struct time tm;
FILE *p[3],*r;
clrscr();
star();
gotoxy(36,10);
printf("WELCOME");
gotoxy(38,14);
printf("TO");
gotoxy(28,18);
printf("SINGHAL'S BANK OF INDIA");
getch();
clrscr();
star();
gotoxy(25,12);
printf("Enter your name : ");
gets(d4.name);
gotoxy(25,17);
printf("Enter your acount number : ");
scanf("%d",&d4.an);
clrscr();
if(strcmp(d1.name,d4.name)==0&&d1.an==d4.an)
{
 p[0] = fopen("akshat.txt","r");
 fscanf(p[0],"%d",&n);
 q=0;
 fclose(p[0]);
 p[0] = fopen("akshat.txt","w");
}
else if(strcmp(d2.name,d4.name)==0&&d2.an==d4.an)
{
 p[1] = fopen("akash.txt","r");
 fscanf(p[1],"%d",&n);
 q=1;
 fclose(p[1]);
 p[1] = fopen("akash.txt","w");
}
else if(strcmp(d3.name,d4.name)==0&&d3.an==d4.an)
{
 p[2] = fopen("abhishek.txt","r");
 fscanf(p[2],"%d",&n);
 q=2;
 fclose(p[2]);
 p[2] = fopen("abhishek.txt","w");
}
else
{
star();
gotoxy(22,14);
printf("You don't have acount in our bank");
getch();
n=0;
}
if(n==0)
{
 clrscr();
 star();
 gotoxy(34,10);
 printf("THANK YOU");
 gotoxy(33,14);
 printf("FOR VISITING");
 gotoxy(28,18);
 printf("SINGHAL'S BANK OF INDIA");
 getch();
}
else
{
while(c!='N'&&c!='n')
{
star();
gotoxy(27,11);
printf(">>>>>>>>>>>>>MENU<<<<<<<<<<<<<");
gotoxy(33,12);
printf("1. Balance Enquiry");
gotoxy(33,13);
printf("2. Deposit");
gotoxy(33,14);
printf("3. Withdraw");
gotoxy(33,15);
printf("4. Transfer");
gotoxy(20,17);
printf("\t     Enter your choice : ");
scanf("%d",&ch);
clrscr();
star();
switch(ch)
{
 case 1 : gotoxy(30,11);
	  printf("\3  Balance Enquiry  \3");
	  gotoxy(29,16);
	  printf("Your Balance is Rs.%d",n);
	  getch();
	  break;
 case 2 : gotoxy(35,11);
	  printf("\4  Deposit  \4");
	  gotoxy(22,14);
	  printf("Enter the amount to be Deposit : Rs.");
	  scanf("%d",&a);
	  b=b+a;
	  n=n+a;
	  gotoxy(17,17);
	  printf("Put the cash in the Counter and then press Enter");
	  getch();
	  clrscr();
	  star();
	  gotoxy(32,14);
	  printf("Deposit Sucessful");
	  getch();
	  break;
 case 3 : gotoxy(35,11);
	  printf("\5  Withdraw  \5");
	  gotoxy(22,14);
	  printf("Enter the amount to be Withdraw : Rs.");
	  scanf("%d",&h);
	  if(h<=n)
	  {
	  d=d+h;
	  n=n-h;
	  gotoxy(28,17);
	  printf("Pick up the cash from counter");
	  }
	  else
	  {
	  gotoxy(22,17);
	  printf("You don't have enough balance to withdraw");
	  }
	  getch();
	  break;
 case 4 : gotoxy(35,11);
	  printf("\6  Transfer  \6");
	  gotoxy(22,14);
	  printf("Enter the amount to be transfer : Rs.");
	  scanf("%d",&e);
	  if(e<=n)
	  {
	  gotoxy(28,16);
	  printf("Enter the acount number : ");
	  scanf("%d",&g);
	  if(g==d1.an)
	  {
	   r = fopen("akshat.txt","r");
	   fscanf(r,"%d",&s);
	   s=s+e;
	   fclose(r);
	   r = fopen("akshat.txt","w");
	   fprintf(r,"%d",s);
	   fclose(r);
	  }
	  else if(g==d2.an)
	  {
	   r = fopen("akash.txt","r");
	   fscanf(r,"%d",&s);
	   s=s+e;
	   fclose(r);
	   r = fopen("akash.txt","w");
	   fprintf(r,"%d",s);
	   fclose(r);
	  }
	  else if(g==d3.an)
	  {
	   r = fopen("abhishek.txt","r");
	   fscanf(r,"%d",&s);
	   s=s+e;
	   fclose(r);
	   r = fopen("abhishek.txt","w");
	   fprintf(r,"%d",s);
	   fclose(r);
	  }
	  else
	  {
	   clrscr();
	   star();
	   gotoxy(22,14);
	   printf("This account is not related to our bank");
	   getch();
	   t=6;
	  }
	  if(t!=6)
	  {
	  t=5;
	  f=f+e;
	  n=n-e;
	  gotoxy(33,19);
	  printf("Transfer sucessful");
	  }
	  }
	  else
	  {
	  gotoxy(22,18);
	  printf("You don't have enough balance to transfer");
	  }
	  getch();
	  break;
 default: gotoxy(30,14);
	  printf("Wrong Choice Entered");
	  x=1;
	  getch();
	  break;
}
if(x==1)
{
 c='Y';
 x=0;
 clrscr();
}
else
{
 clrscr();
 star();
 gotoxy(20,14);
 printf("Do you want to execute again (Y/N) : ");
 scanf("%s",&c);
 clrscr();
}     //else
}     //while
fprintf(p[q],"%d",n);
fclose(p[q]);
for(i=3;i<24;i++)
{
 gotoxy(19,i);
 printf("\5");
 gotoxy(61,i);
 printf("\5");
}
gotoxy(26,3);
printf("-----------------------------");
gotoxy(29,4);
printf("SINGHAL'S BANK OF INDIA");
gotoxy(26,5);
printf("-----------------------------");
getdate(&dt);
gettime(&tm);
gotoxy(22,8);
printf("Date : %d/%d/%d     Time : %d:%d:%d",dt.da_day,dt.da_mon,dt.da_year,tm.ti_hour,tm.ti_min,tm.ti_sec);
gotoxy(28,11);
printf("Your Name : %s",d4.name);
gotoxy(26,13);
printf("Your Acount Number is : %d",d4.an);
gotoxy(24,15);
printf("\4 You have Deposit : Rs.%d",b);
gotoxy(24,16);
printf("\4 You have Withdraw : Rs.%d",d);
gotoxy(24,17);
printf("\4 You have Transfer : Rs.%d",f);
gotoxy(24,18);
printf("\4 Your Current Balance is Rs.%d",n);
gotoxy(31,21);
printf("Thanks for Visiting");
gotoxy(29,22);
printf("Singhal's Bank of India");
gotoxy(31,23);
printf("www.singhalbank.com");
getch();
}     //else
}