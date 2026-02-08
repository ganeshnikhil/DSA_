// package DSA.Siddhant_500120573.Day8;

public class Q2 {
    public static void main(String[] args) {
        String input = "My name is Siddhant Adhikari ";
        char target = 'i';
        int count = countCharOccurrences(input, target);
        System.out.println(count);
    }

    public static int countCharOccurrences(String str, char ch) {
        int count = 0;
        for (int i = 0; i < str.length(); i++) {
            if (str.charAt(i) == ch) {
                count++;
            }
        }
        return count;
    }
}