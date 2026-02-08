public class Q2 {
    public static void countVowelsAndConsonants(String input) {
        int vowels = 0, consonants = 0;
        String s = input.toLowerCase();
        for (char c : s.toCharArray()) {
            if (Character.isLetter(c)) {
                if ("aeiou".indexOf(c) != -1) {
                    vowels++;
                } else {
                    consonants++;
                }
            }
        }
        System.out.println("Vowels: " + vowels + ", Consonants: " + consonants);
    }

    public static void main(String[] args) {
        countVowelsAndConsonants("Siddhant"); // Vowels: 2, Consonants: 3
    }
}