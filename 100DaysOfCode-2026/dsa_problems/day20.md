<h2 align="center">Day 20 (05/07/2025)</h2>

## 1. Sort Students by Grade
A problem that introduces custom sorting techniques and teaches how to sort complex data structures based on specific criteria.

You are given a list of students along with their grades, represented as **pairs (tuples)** containing the student's name and their numerical grade. Write a program to sort these students by their **grades in descending order** (highest grade first). This type of sorting is commonly used in **educational systems** for ranking students or generating **merit lists**. The challenge involves understanding how to sort based on specific attributes of compound data structures.

This teaches **custom comparison sorting** and **tuple/object manipulation** techniques that are essential for **real-world data processing and ranking systems**.

**Your task:** Sort student records by grades in descending order using custom sorting criteria.

### Examples

**Input:**
```
[("Ram", 85), ("Bhuvi", 92), ("Chetan", 78)]
```
**Output:**
```
[("Bhuvi", 92), ("Ram", 85), ("Chetan", 78)]
```

---

**Input:**
```
[("Jatin", 88), ("Sarah", 95), ("Mona", 82), ("Aadi", 95)]
```
**Output:**
```
[("Sarah", 95), ("Aadi", 95), ("Jatin", 88), ("Mona", 82)]
```

---

## 2. Merge Two Sorted Arrays
A problem that demonstrates efficient array merging techniques and teaches the fundamental building block of merge sort algorithm.

Given two arrays that are already **sorted in ascending order**, write a function to merge them into a **single sorted array**. The merged array should contain all elements from both input arrays while maintaining the **sorted order**. This operation is fundamental in **merge sort algorithm** and is commonly used in data processing where you need to **combine sorted datasets** efficiently without re-sorting the entire collection.

This introduces **two-pointer merging** and **divide-and-conquer principles** that are crucial for **efficient sorting algorithms and data stream processing**.

**Your task:** Merge two pre-sorted arrays into one sorted array using optimal merging technique.

### Examples

**Input:**
```
Array1: [1, 3, 5], Array2: [2, 4, 6]
```
**Output:**
```
[1, 2, 3, 4, 5, 6]
```

---

**Input:**
```
Array1: [1, 5, 9, 10], Array2: [2, 3, 8, 13]
```
**Output:**
```
[1, 2, 3, 5, 8, 9, 10, 13]
```

---

**Input:**
```
Array1: [10, 30, 50], Array2: [20, 40, 60, 70]
```
**Output:**
```
[10, 20, 30, 40, 50, 60, 70]
```

---

## 3. Kth Largest Element
A problem that teaches selection algorithms and demonstrates efficient methods for finding ranked elements without full sorting.

Find the **Kth largest element** in an unsorted array of integers. For example, if K=1, find the largest element; if K=2, find the second largest element, and so on. This problem appears frequently in **interviews** and **real-world applications** like finding top performers, identifying outliers, or selecting elements based on rank. You can solve this by sorting first, but try to think of **more efficient approaches** using selection algorithms or heap-based methods.

This teaches **selection algorithms** and **partial sorting techniques** that are essential for **top-K problems and efficient ranking without complete data sorting**.

**Your task:** Find the Kth largest element using efficient selection algorithms beyond simple sorting.

### Examples

**Input:**
```
Array: [3, 2, 1, 5, 6, 4], K: 2
```
**Output:**
```
5
```

---

**Input:**
```
Array: [7, 10, 4, 3, 20, 15], K: 3
```
**Output:**
```
10
```

---

**Input:**
```
Array: [1, 23, 12, 9, 30, 2, 50], K: 4
```
**Output:**
```
12
```
