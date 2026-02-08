#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to count all palindromic substrings
int countPalindromicSubstrings(const char *str) 
{
    int count = 0;
    int n = strlen(str);
    
    if (n == 0) return 0;
    
    // Every single character is a palindrome
    count += n;
    
    // Checking for palindromes of length 2
    for (int i = 0; i < n - 1; i++) 
    {
        if (str[i] == str[i + 1]) 
        {
            count++;
        }
    }
    
    // Checking for palindromes longer than 2 characters
    for (int len = 3; len <= n; len++) 
    {
        for (int i = 0; i <= n - len; i++) 
        {
            int j = i + len - 1;
            bool isPalindrome = true;
            
            // Checking if substring str[i..j] is palindrome
            int left = i, right = j;
            while (left < right) 
            {
                if (str[left] != str[right]) 
                {
                    isPalindrome = false;
                    break;
                }
                left++;
                right--;
            }
            
            if (isPalindrome) 
            {
                count++;
            }
        }
    }
    
    return count;
}

// Optimized version using center expansion (more efficient)
int countPalindromicSubstringsOptimized(const char *str) 
{
    int count = 0;
    int n = strlen(str);
    
    for (int i = 0; i < n; i++) 
    {
        // Odd length palindromes
        int left = i, right = i;
        while (left >= 0 && right < n && str[left] == str[right]) 
        {
            count++;
            left--;
            right++;
        }
        
        // Even length palindromes
        left = i;
        right = i + 1;
        while (left >= 0 && right < n && str[left] == str[right]) 
        {
            count++;
            left--;
            right++;
        }
    }
    
    return count;
}

int main() 
{
    char input[1000];
    
    printf("Enter a string to count its palindromic substrings:\n");
    fgets(input, sizeof(input), stdin);
    
    // Removing the newline character if present
    input[strcspn(input, "\n")] = '\0';
    
    // int count = countPalindromicSubstrings(input); // Basic version
    int count = countPalindromicSubstringsOptimized(input); // Optimized version
    
    printf("Total palindromic substrings in '%s': %d\n", input, count);
    
    return 0;
}