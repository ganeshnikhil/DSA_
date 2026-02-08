<h2 align="center">Day 10 (25/06/2025)</h2>

## 1. String Comparison
A problem that teaches comprehensive string comparison operations and lexicographical ordering.

Write a program that compares two strings and determines their relationship. Check if the strings are **exactly equal**, **equal when ignoring case**, or **completely different**. Also determine which string comes first **alphabetically** (lexicographically).

This helps understand **string comparison operations** which are fundamental in **sorting and searching algorithms**.

**Your task:** Compare two strings for exact equality, case-insensitive equality, and lexicographical order.

### Examples

**Input:**
```
String1: "Hello", String2: "hello"
```
**Output:**
```
Not equal, Equal ignoring case, "Hello" comes before "hello"
```

---

**Input:**
```
String1: "apple", String2: "banana"
```
**Output:**
```
Not equal, Not equal ignoring case, "apple" comes before "banana"
```

---

**Input:**
```
String1: "test", String2: "test"
```
**Output:**
```
Equal, Equal ignoring case, Strings are identical
```

---

## 2. Remove Spaces
A problem that demonstrates different types of string cleaning operations used in data processing.

Create a function that **removes all spaces** from a given string and returns the result. Additionally, provide a version that removes only **leading and trailing spaces** (trim), and another that removes **extra spaces between words** (leaving only single spaces).

This demonstrates different types of **string cleaning operations** commonly used in **data processing**.

**Your task:** Implement three space removal operations: all spaces, trim, and single spaces.

### Examples

**Input:**
```
" hello world "
```
**Output:**
```
Remove all: "helloworld", Trim: "hello world", Single spaces: "hello world"
```

---

**Input:**
```
"programming is fun"
```
**Output:**
```
Remove all: "programmingisfun", Trim: "programming is fun", Single spaces: "programming is fun"
```

---

**Input:**
```
" a b c "
```
**Output:**
```
Remove all: "abc", Trim: "a b c", Single spaces: "a b c"
```

---

## 3. Check Anagram
A problem that teaches character frequency analysis and comparison techniques for anagram detection.

Two strings are **anagrams** if they contain the same characters with the same frequency, but possibly in different order. Write a program to check if two given strings are anagrams of each other. **Ignore case and spaces** for this comparison.

This problem helps understand **character frequency analysis** and **comparison techniques**.

**Your task:** Check if two strings are anagrams (ignore case and spaces).

### Examples

**Input:**
```
String1: "listen", String2: "silent"
```
**Output:**
```
true
```

---

**Input:**
```
String1: "hello", String2: "world"
```
**Output:**
```
false
```

---

**Input:**
```
String1: "The Eyes", String2: "They See"
```
**Output:**
```
true
```
