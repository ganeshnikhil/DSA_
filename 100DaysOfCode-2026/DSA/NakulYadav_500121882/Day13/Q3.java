import java.util.Scanner;
public class Q3 {
    String reverseString(String str){
        String [] words=str.trim().split(" +");
        StringBuilder sb=new StringBuilder();
        for(int i=words.length-1;i>=0; i--){
            sb.append(words[i]);

            if(i!=0){
                sb.append(" ");
        }
      }
        return sb.toString();
  }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter string: ");
        String str = sc.nextLine();
        Question3 obj =new Question3();

         String reversed = obj.reverseString(str);
        System.out.println("Reversed words: " + reversed);
        
    }
}
