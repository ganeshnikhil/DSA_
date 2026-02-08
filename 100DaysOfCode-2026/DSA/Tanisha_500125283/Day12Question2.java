//  Problem Staement: Given a string, remove all duplicate characters and return a string with only unique characters in their first 
// occurrence order. For example, if the input is "programming", the output should be "progamin" because 'r' 
// and 'm' appear multiple times.
//  Task: Remove duplicate characters while preserving first occurrence order.
//  ExamplesInput:"programming"
//  Output: "progamin

package DSA.Tanisha_500125283;

import java.util.LinkedHashSet;

public class Day12Question2{

    public static String removeDuplicates(String str) {
        if (str == null) return null;

        LinkedHashSet<Character> stri = new LinkedHashSet<>();
        for (char ch : str.toCharArray()) {
            stri.add(ch);
        }

    
        StringBuilder result = new StringBuilder();
        for (char ch : stri) {
            result.append(ch);
        }

        return result.toString();
    }

    public static void main(String[] args) {
        System.out.println(removeDuplicates("programming")); 
        
    }
}
