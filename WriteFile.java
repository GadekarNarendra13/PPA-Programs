
import java.io.*;

class WriteFile
{
    public static void main(String arg[])
    {
        try
        {
            String Data = "Marvellous Infosystems";
            byte Arr[] = Data.getBytes();  //string data convert into byte syntax

            FileOutputStream fobj = new FileOutputStream("PPA.txt");
            fobj.write(Arr);
        } 
        catch(Exception obj)
        {}
    
    }
}