#include<stdio.h>
#include<conio.h>
struct employee
{
	int  no;
	char name[10];
	double net,ded,gross,bas_sal,pr_day,earn,prbas_sal;
	struct  earning
	{
		double DA;
		double MA;
		double HRA;
		double spl_alw;
	}er;
	struct deduction
	{
		double PF,PT,IT;
	}de;
};
int main()
{
	 struct employee e;
	 printf("enter your no:");
	 scanf("%d",&e.no);
	 flushall();
	 printf("\n\n enter your name:");
	 gets(e.name);
	 printf("\n\n enter your basic salary=");
	 scanf("%lf",&e.bas_sal);
	 printf("\n\n enter no of present days=");
	 scanf("%lf",&e.pr_day);
	 e.prbas_sal=(double)e.bas_sal*e.pr_day/26;
	 e.er.DA=e.prbas_sal*41/100;
	 e.er.HRA=e.prbas_sal*12/100;
	 e.er.MA=1000;
	 e.er.spl_alw=5000;
	 e.de.PF=e.prbas_sal*12/100;
	 e.earn=e.er.DA+e.er.HRA+e.er.MA+e.er.spl_alw;
	 e.gross=e.prbas_sal+e.earn;
	 e.de.IT=e.prbas_sal*10/100;
	 e.ded=e.de.IT+e.de.PF+e.de.PT;
	 e.net=e.gross-e.ded;
	 if(e.gross>12000)
	 {
		e.de.PT=210;
	 }
	 else if(e.gross>9000)
	 {
		e.de.PT=150;
	 }
	 else if(e.gross>6000)
	 {
		e.de.PT=80;
	 }
	 else
	 {
		e.de.PT=20;
	 }
	 printf("\n\t\t**************** employee data****************\n\t\t");
	 printf("\n                    ||| TCS ION PVT LTD.|||                \n ");
	 printf("\n                       JUNE-2019                      \n ");
	 printf("\n  EMP NO:%d",e.no);
	 printf("\t\t\t  BASIC SALARY:%.2lf",e.bas_sal);
	 printf("\n  emp name=%s",e.name);
	 printf("\t\t\t  present days=%.0lf",e.pr_day);
	 printf("\n  BASIC SALARY=%.2lf",e.prbas_sal);
	 printf("\n  DA          =%.2lf",e.er.DA);
	 printf("\t  PF          =%.2lf",e.de.PF);
	 printf("\n  HRA         =%.2lf",e.er.HRA);
	 printf("\t  PT          =%.2lf",e.de.PT);
	 printf("\n  MA          =%.2lf",e.er.MA);
	 printf("\n  SPE ALLOWNCE=%.2lf",e.er.spl_alw);
	 printf("\n  earnings    =%.2lf",e.earn);
	 printf("\t  IT          =%.2lf",e.de.IT);
	 printf("\n  gross       =%.2lf",e.gross);
	 printf("\t  deduction   =%.2lf",e.ded);
	 printf("\n\t\t  net=%.2lf",e.net);
	 getch();
}

