<h2 align="center">Day 18 (03/07/2025)</h2>

## 1. Selection Sort
A problem that introduces fundamental sorting algorithms and teaches how to organize data systematically through comparison-based techniques.

Implement the **selection sort algorithm** to sort an array of integers in ascending order. Selection sort works by finding the **minimum element** from the unsorted portion of the array and **swapping it** with the first element of the unsorted portion. This process is repeated until the entire array is sorted. While not the most efficient for large datasets, selection sort is simple to understand and implement, making it great for learning **sorting concepts** and **algorithm fundamentals**.

This teaches **comparison-based sorting** and **in-place array manipulation** techniques that form the foundation of **algorithmic thinking and data organization**.

**Your task:** Implement selection sort to arrange elements in ascending order.

### Examples

**Input:**
```
[29, 10, 14, 37, 13]
```
**Output:**
```
[10, 13, 14, 29, 37]
```

---

**Input:**
```
[64, 25, 12, 22, 11]
```
**Output:**
```
[11, 12, 22, 25, 64]
```

---

**Input:**
```
[5, 3, 8, 1, 6]
```
**Output:**
```
[1, 3, 5, 6, 8]
```

---

## 2. Insertion Sort
A problem that demonstrates adaptive sorting techniques and teaches efficient handling of nearly sorted data through incremental insertion methods.

Write a program that implements **insertion sort** to arrange an array of integers in ascending order. Insertion sort builds the final sorted array **one element at a time** by taking elements from the unsorted portion and **inserting them** into their correct position in the sorted portion. It's similar to how you might sort playing cards in your hand, making it **intuitive to understand** and efficient for small arrays or nearly sorted data.

This introduces **adaptive sorting algorithms** and **incremental data processing** techniques essential for **efficient data manipulation and real-time sorting scenarios**.

**Your task:** Implement insertion sort using the card-sorting approach.

### Examples

**Input:**
```
[12, 11, 13, 5, 6]
```
**Output:**
```
[5, 6, 11, 12, 13]
```

---

**Input:**
```
[31, 41, 59, 26, 53]
```
**Output:**
```
[26, 31, 41, 53, 59]
```

---

**Input:**
```
[4, 2, 7, 1, 3]
```
**Output:**
```
[1, 2, 3, 4, 7]
```

---

## 3. Sort Colors (Dutch Flag)
A problem that teaches advanced array partitioning techniques and demonstrates efficient three-way sorting using the famous Dutch National Flag algorithm.

You are given an array containing only **three distinct values**: 0, 1, and 2, representing three different colors. Sort this array **in-place** so that all 0s come first, followed by all 1s, and then all 2s. The challenge is to do this efficiently in a **single pass** through the array without using extra space for another array. This problem is also known as the **Dutch National Flag problem** and demonstrates optimal **three-way partitioning**.

This teaches **partitioning algorithms** and **space-efficient sorting** techniques that are crucial for **memory-constrained environments and optimal algorithm design**.

**Your task:** Sort three colors efficiently using single-pass three-way partitioning.

### Examples

**Input:**
```
[2, 0, 2, 1, 1, 0]
```
**Output:**
```
[0, 0, 1, 1, 2, 2]
```

---

**Input:**
```
[2, 0, 1, 2, 1, 0, 0]
```
**Output:**
```
[0, 0, 0, 1, 1, 2, 2]
```

---

**Input:**
```
[1, 2, 0, 1, 2, 0]
```
**Output:**
```
[0, 0, 1, 1, 2, 2]
```
