<h2 align="center">Day 11 (26/06/2025)</h2>

## 1. Palindrome Ignoring Spaces and Punctuation
A problem that teaches advanced palindrome checking with real-world text processing considerations.

Write an advanced palindrome checker that **ignores spaces, punctuation marks, and case sensitivity**. This means "A man, a plan, a canal: Panama" should be recognized as a palindrome. Your program should only consider **alphabetic and numeric characters** for the palindrome check, making it more practical for **real-world text analysis**.

This helps understand **character filtering and normalization** techniques commonly used in **text processing and natural language processing**.

**Your task:** Check if a string is a palindrome ignoring spaces, punctuation, and case.

### Examples

**Input:**
```
"A man, a plan, a canal: Panama"
```
**Output:**
```
true
```

---

**Input:**
```
"race a car"
```
**Output:**
```
false
```

---

**Input:**
```
"Was it a car or a cat I saw?"
```
**Output:**
```
true
```

---

## 2. Longest Palindromic Substring
A problem that combines palindrome detection with substring analysis and demonstrates dynamic programming concepts.

Given a string, find the **longest substring that is a palindrome**. If there are multiple palindromic substrings of the same maximum length, return any one of them. A substring is a **contiguous sequence of characters** within a string.

This problem combines **palindrome detection with substring analysis** and is a classic **dynamic programming problem** that teaches optimal substructure concepts.

**Your task:** Find the longest palindromic substring in a given string.

### Examples

**Input:**
```
"babad"
```
**Output:**
```
"bab" (or "aba")
```

---

**Input:**
```
"cbbd"
```
**Output:**
```
"bb"
```

---

**Input:**
```
"racecar"
```
**Output:**
```
"racecar"
```

---

## 3. Count Palindromic Substrings
A problem that teaches systematic substring enumeration and palindrome detection techniques.

Write a program that **counts all palindromic substrings** in a given string. A palindromic substring reads the same forward and backward. Count both **odd-length and even-length palindromes**. Single characters are also considered palindromes.

This problem helps understand how to **systematically check all possible substrings** and introduces concepts used in **string pattern matching algorithms**.

**Your task:** Count the total number of palindromic substrings in a string.

### Examples

**Input:**
```
"abc"
```
**Output:**
```
3
```

---

**Input:**
```
"aaa"
```
**Output:**
```
6
```

---

**Input:**
```
"aba"
```
**Output:**
```
4
```
