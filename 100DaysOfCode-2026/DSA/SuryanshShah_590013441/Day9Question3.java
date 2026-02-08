import java.util.*;
class Day9Question3
{
    public static void main(String[] args)
    {
        String str;
        int l;
        System.out.println("Enter a String");
        Scanner scr=new Scanner(System.in);
        str=scr.nextline();
        l=str.length();
        char ch= ''
        int i=0,j=0,flag=0,count=0;
        for(i=0;i<l;i++)
        {
            count=0;
            for(j=0:j<l;j++)
                {
                    if(str.charAt[i]==str.charAt[j])
                        count++;
                 }
            if(count==1)
            {
                ch=str.charAt[i];
                flag=1;
                break;
            }
        }
        if(flag==1)
            System.out.println("'"+ch+"'");
        else
            System.out.println("-1")
    }
}
