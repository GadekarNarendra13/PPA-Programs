class Wrapper
{
    public static void main(String Arg[])
    {
        int no = 11;

        Integer iobj = no;  //Boxing
        System.out.println(no);
        System.out.println(iobj);

        int i = iobj; //Unboxing
        System.out.println(i);
    }
}