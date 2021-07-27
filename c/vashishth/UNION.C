#include<stdio.h>
#include<conio.h>
union stud
{
  int no;
  char nm[2];
}s;
int main()
{
 s.no=6;
 s.nm[2]='kr';
 printf("\n no=%d \n name=%c",s.no,s.nm);
 printf("\n size of structure=%d",sizeof(s));
 printf("\n\n\n\n\n\n\t\t\t\t !!!YOU WON!!!");
 return 0;
}
