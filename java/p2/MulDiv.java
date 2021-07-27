package p3;

interface MulDiv{
	void mul();
	void div();
}

class Test2 implements MulDiv{
	void mul()
	{
		int a=1,b=0;
		int c=a*b;
		System.out.println("Multiplication=" + c);
	}
	void div()
	{
		int a=4,b=1;
		int c=a/b;
		System.out.println("Division=" + c);
	}
}