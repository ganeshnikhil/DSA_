//  Problem Statement: Write a function to check if one string is a rotation of another string. A string rotation means you can move 
// characters from the beginning of the string to the end. For example, "abcde" rotated becomes "cdeab" if 
// you move "ab" to the end. Use an efficient method to solve this without generating all possible rotations
//  Examples Input:
//  String1: "abcde", String2: "cdeab
// Output: true

package DSA.Tanisha_500125283;
public class Day12Question1{

    public static boolean Rotation(String str1, String str2) {
        
        if (str1 == null || str2 == null || str1.length() != str2.length()) {
            return false;
        }
        
        String concat = str1 + str1;
        //str1 + str1 includes all possible rotations of str1.
        // If str2 is found within that, then it’s a valid rotation.

        return concat.contains(str2);
    }

    public static void main(String[] args) {
        System.out.println(Rotation("abcde", "cdeab")); 
    }
}
