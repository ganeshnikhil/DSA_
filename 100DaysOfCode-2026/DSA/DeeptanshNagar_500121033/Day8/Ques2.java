// DAY 8 <-----/---> QUE 2


public class Ques2 {
    public static void main(String[] args) {
        String str = "JavaScript";
        char c = 'a';
        int ans = checkCount(str, c);
        System.out.println(ans);
    }

    public static int checkCount(String s, char c) {
        int count = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == c) {
                count++;
            }
        }
        return count;
    }
}
