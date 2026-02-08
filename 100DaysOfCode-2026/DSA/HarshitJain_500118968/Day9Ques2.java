public class VowelConsonantCounter {
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
        countVowelsAndConsonants("hello");        // Vowels: 2, Consonants: 3
        countVowelsAndConsonants("Programming");  // Vowels: 3, Consonants: 8
        countVowelsAndConsonants("aeiou");        // Vowels: 5, Consonants: 0
    }
}
