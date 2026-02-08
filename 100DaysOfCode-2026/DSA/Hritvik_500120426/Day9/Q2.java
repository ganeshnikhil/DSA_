public class Q2{
    public static void countVowelsAndConsonants(String s) {
        int vowels = 0, consonants = 0;
        for (char c : s.toCharArray()) {
            if (Character.isLetter(c)) {
                char lower = Character.toLowerCase(c);
                if ("aeiou".indexOf(lower) != -1) {
                    vowels++;
                } else {
                    consonants++;
                }
            }
        }
        System.out.println("Vowels: " + vowels + ", Consonants: " + consonants);
    }

    public static void main(String[] args) {
        countVowelsAndConsonants("hello");        
        countVowelsAndConsonants("Programming");  
        countVowelsAndConsonants("aeiou");     
    }
}
