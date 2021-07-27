#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,LCM,cnt;
	printf("enter first number=");
	scanf("%d",&a);
	printf("\nenter second number=");
	scanf("%d",&b);
	cnt=(a<b)?a:b; //ternary operator
	while(1)
	{
		if(LCM%a==0 && LCM%b==0)
		{
			LCM=cnt;
			break;
		}
		cnt++;
	}
	printf("\nLCM=",LCM);
		
	/*for(LCM=1;LCM<=a*b;LCM++)
	{
		if(LCM%a==0 && LCM%b==0)
		break;
			
	}
	printf("\nLCM=",LCM);*/
	
	
	return 0;
}
