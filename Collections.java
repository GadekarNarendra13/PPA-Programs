import java.util.*;

class Collections
{
    public static void main(String arg[])
    {
        LinkedList <Integer> lobj = new LinkedList<Integer>();

        lobj.add(10);
        lobj.add(20);
        lobj.add(30);
        lobj.add(40);

        System.out.println(lobj);

        lobj.addFirst(5);

        System.out.println(lobj);

        if(lobj.conatains(30))
        {
            System.out.println("LL contAins 30 in it");
        }
        else
        {
            System.out.println("There is no 30in the LL");
        }
        System.out.println("Index of 30is : "+lobj.index(30));

        Iterator iobj = lobj.iterator();

        while(iobj.hasNext())
        {
            System.out.println(iobj.next());
        }

        lobj.clear();

    }
}