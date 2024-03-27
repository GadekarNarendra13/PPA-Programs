abstract class Demo
{
    public int A;
    public int B;

    public Demo()
    {
        System.out.println("Inside constructor");
        this.A = 0;
        this.B = 0;
    }
    abstract void fun();
    // virtual void fun() = 0;

    void gun()
    {
        System.out.println("Inside gun");
    }
}
class AbstractDemo
{
    public static void main(String arg[])
    {

    }

}