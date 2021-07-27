#include<stdio.h>
#include<conio.h>
main()
{
	char name[10];
	int i,cnt=0;
	printf("\n enter name:");
	scanf("%s",&name);
	for(i=0;name[i]!=NULL;i++)
	{
		printf("\n name[%d]:%c",i,name[i]);
		cnt++;
		switch(name[i])
		{
			case 'a':
			case 'e':
			case 'o':
			case 'u':
			case 'i':
				name[i]=!;
				break;
		 }
	}
       printf("\n your name is:%s",name);
       printf("\n lenght of name:%d",cnt);
       getch();

}
