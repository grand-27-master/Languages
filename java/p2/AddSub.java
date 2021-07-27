package p2;

interface AddSub{
	void add();
	void sub();
}

class Test1 implements AddSub{
	void add()
	{
		int a=1,b=2;
		int c=a+b;
		System.out.println("Addition=" + c);
	}
	void sub()
	{
		int a=4,b=2;
		int c=a-b;
		System.out.println("Subtraction=" + c);
	}
}