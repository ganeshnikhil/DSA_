public class Day_8_question_2 {
    public static void main(String [] args){
        String stg = "Hello World";
        char c = 'l';
        System.out.println(charCount(stg, c));
    }
    public static int charCount(String s, char c){
        int count = 0;
        char chr[] = s.toCharArray();

        for(int i =0 ; i < chr.length; i++) {
            if (chr[i] == c) {
                count++;
            }
        }
        return count;
    }
}
