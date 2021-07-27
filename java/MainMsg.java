class ThreadExample extends Thread
{
    ThreadExample(String s)
    {
        super(s);
        start();
    }
    public void run()
    {
        for(int i=0;i<5;i++)
        {
            System.out.println(Thread.currentThread().getName());
            try
            {
                if(Thread.currentThread().getName()=="Hello")
                {
                    Thread.sleep(2000);
                }
                else
                {
                    Thread.sleep(4000);
                }
            }
            catch(Exception e){}
        }
    }
}
class MainMsg
{
    public static void main(String arg[])
    {
        System.out.println("Thread name : "+Thread.currentThread().getName());
        ThreadExample e1=new ThreadExample("Hello");
        ThreadExample e2=new ThreadExample("Welcome to VIT");
    }
}