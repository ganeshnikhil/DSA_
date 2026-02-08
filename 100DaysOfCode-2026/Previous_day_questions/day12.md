<h2 align="center">Day 12 (27/06/2025)</h2>

## 1. String Rotation
A problem that teaches efficient string pattern matching and rotation detection without brute force enumeration.

Write a function to check if one string is a **rotation of another string**. A string rotation means you can move characters from the beginning of the string to the end. For example, "abcde" rotated becomes "cdeab" if you move "ab" to the end. Use an **efficient method** to solve this without generating all possible rotations.

This helps understand **string concatenation techniques** and **pattern matching algorithms** used in **text processing and search operations**.

**Your task:** Check if one string is a rotation of another using an efficient approach.

### Examples

**Input:**
```
String1: "abcde", String2: "cdeab"
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
String1: "waterbottle", String2: "erbottlewat"
```
**Output:**
```
true
```

---

## 2. Remove Duplicate Characters
A problem that demonstrates character tracking and efficient string building techniques for data cleaning.

Given a string, **remove all duplicate characters** and return a string with only unique characters in their **first occurrence order**. For example, if the input is "programming", the output should be "progamin" because 'r' and 'm' appear multiple times.

This problem helps understand **character tracking and string building techniques** commonly used in **data preprocessing and text normalization**.

**Your task:** Remove duplicate characters while preserving first occurrence order.

### Examples

**Input:**
```
"programming"
```
**Output:**
```
"progamin"
```

---

**Input:**
```
"hello"
```
**Output:**
```
"helo"
```

---

**Input:**
```
"aabbcc"
```
**Output:**
```
"abc"
```

---

## 3. Compress String
A problem that introduces basic compression algorithms and teaches run-length encoding concepts.

Implement a **basic string compression algorithm** that replaces repeated characters with the character followed by the **count of repetitions**. For example, "aabcccccaaa" becomes "a2b1c5a3". If the compressed string is not smaller than the original string, return the original string.

This introduces **basic compression concepts** and **run-length encoding** techniques used in **data compression and storage optimization**.

**Your task:** Compress strings using character count encoding with size optimization.

### Examples

**Input:**
```
"aabcccccaaa"
```
**Output:**
```
"a2b1c5a3"
```

---

**Input:**
```
"abc"
```
**Output:**
```
"abc"
```

---

**Input:**
```
"aabbcc"
```
**Output:**
```
"a2b2c2"
```
