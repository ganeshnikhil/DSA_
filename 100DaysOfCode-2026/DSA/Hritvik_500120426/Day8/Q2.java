public class Q2{
    public static int countCharacter(String input, char ch) {
        int count = 0;
        for (int i = 0; i < input.length(); i++) {
            if (input.charAt(i) == ch) {
                count++;
            }
        }
        return count;
    }

    public static void main(String[] args) {
        System.out.println(countCharacter("programming", 'r')); 
        System.out.println(countCharacter("Hello World", 'l')); 
        System.out.println(countCharacter("JavaScript", 'a')); 
    }
}
