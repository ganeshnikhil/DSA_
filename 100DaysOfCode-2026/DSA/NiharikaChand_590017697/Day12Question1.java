import java.util.*;
class Day12Question1 
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter string: ");
        String str1 = sc.nextLine();
        System.out.println("Enter string: ");
        String str2 = sc.nextLine();

        boolean result = true;
        if(str1.length() != str2.length())
        {
            result = false;
        }
        else
        {
            result = (str1 + str1).contains(str2);  //(str1+str1) contains all possible rotations
        }
        System.out.println(result);      
    }
}