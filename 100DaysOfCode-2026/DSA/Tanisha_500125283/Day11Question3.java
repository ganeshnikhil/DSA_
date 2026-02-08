//  Problem Statement: Write a program that counts all palindromic substrings in a given string. A palindromic substring reads the 
//  same forward and backward. Count both odd-length and even-length palindromes. Single characters are 
//  also considered palindromes.
//  Task: Count the total number of palindromic substrings in a string.
//  ExamplesInput:"abc"
//  Output:3

package DSA.Tanisha_500125283;

public class Day11Question3 {

    public int countSubstrings(String s) {
        int n = s.length();
        int count = 0; 

        // Loop through all possible centers
        for (int center = 0; center < 2 * n - 1; center++) {
            int left = center / 2;
            int right = left + center % 2;

         // Expand around center 
        while (left >= 0 && right < n && s.charAt(left) == s.charAt(right)) {
            count++;
            left--;
            right++;
        }
     }
        return count;
    }

    public static void main(String[] args) {
        Day11Question3 counter = new Day11Question3(); 
        System.out.println(counter.countSubstrings("abc"));     
        
    }
}
