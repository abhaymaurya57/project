#include<stdio.h>
#include<conio.h>
int menu();
void bus();
void cycle();
void riksha();
void delete();
void showdetail();
int nor=0,nob=0,noc=0,amount=0,count=0;
int main()
{
switch(menu())
{
case 1:
bus();
break;
case 2:
cycle();
break;
case 3:
riksha();
break;
case 4:
showdetail();
break;
case 5:
delete();
default:
printf("\ninvalid choice:");
}
getch();
} 
int menu(){
    int ch;
    printf("\n1. enter bus:");
    printf("\n2. enter cycle:");
    printf("\n3. enter riksha:");
    printf("\n.delete data:");
    printf("\n\nenter your choice:\n");
    scanf("%d",&ch);
    return(ch);
}
void delete()
{
    nob=0;
    noc=0;
    nor=0;
    amount=0;
    count=0;
}
void showdatail(){
    printf("\nnumber of bus=%d",nob);
    printf("\nnumber of cycle=%d",noc);
    printf("\nnumber of riksha=%d",nor);
    printf("\ntotal number os vehicle=%d",nob+noc+nor);
    printf("\ntotal gain amount=%d",amount);
}
void riksha()
{
nor++;
amount=amount+50;
count++;
}
void cycle()
{
    noc++;
    amount=amount+20;
    count++;
}
void bus()
{
nob++;
amount=amount+100;
count++;
}