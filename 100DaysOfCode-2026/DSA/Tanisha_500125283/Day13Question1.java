// Problem Statement: Write a program that counts the number of words in a given string. Words are separated by one or more 
// spaces, and you should handle leading and trailing spaces properly. Additionally, find the longest word in 
// the string and return both the word count and the longest word.
// Task: Count words and find the longest word while handling whitespace properly.
// Examples Input:"Hello world programming"
// Output:Word count: 3
// Longest word: "programming"

package DSA.Tanisha_500125283;

public class Day13Question1 {
    public static void Text(String input){
        String[] words= input.trim().split("\\s+");
        int wordCount=words.length;
        String longestWord="";
        for(String word: words){
            if(word.length()>longestWord.length()){
                longestWord=word;
            }
        }
        System.out.println("Word count: " + wordCount);
        System.out.println("Longest word: \"" + longestWord + "\"");
    }
    
    public static void main(String[] args) {
        Text("Hello world programming");
    }
}
