<h2 align="center">Day 17 (02/07/2025)</h2>

## 1. Binary Search Implementation
A problem that introduces efficient searching algorithms and demonstrates the divide-and-conquer approach.

Implement the **binary search algorithm** to find a target element in a **sorted array**. Binary search is much more efficient than linear search for sorted data because it **eliminates half of the remaining elements** in each step. Start by checking the **middle element**, then decide whether to search in the left or right half based on whether the target is smaller or larger than the middle element. Return the **index of the target element** if found, or **-1** if not present.

This teaches **divide-and-conquer algorithms** and **logarithmic time complexity** concepts that are fundamental in **efficient algorithm design**.

**Your task:** Implement binary search for finding elements in sorted arrays.

### Examples

**Input:**
```
Array: [1, 3, 5, 7, 9, 11], Target: 7
```
**Output:**
```
3
```

---

**Input:**
```
Array: [2, 4, 6, 8, 10, 12, 14], Target: 5
```
**Output:**
```
-1
```

---

**Input:**
```
Array: [10, 20, 30, 40, 50], Target: 30
```
**Output:**
```
2
```

---

## 2. First Occurrence
A problem that demonstrates advanced binary search variations for handling duplicate elements in sorted data.

In a sorted array that may contain **duplicate elements**, find the index of the **first occurrence** of a target element. Unlike regular binary search that can return any occurrence, this version specifically needs to find the **leftmost position** where the target appears. This is useful when you need to find the **starting position of a sequence** of identical elements in sorted data.

This teaches **modified binary search techniques** and **boundary detection algorithms** used in **range queries and data analysis**.

**Your task:** Find the first occurrence of a target element in sorted array with duplicates.

### Examples

**Input:**
```
Array: [1, 2, 2, 2, 3, 4], Target: 2
```
**Output:**
```
1
```

---

**Input:**
```
Array: [5, 7, 7, 8, 8, 8, 10], Target: 8
```
**Output:**
```
3
```

---

**Input:**
```
Array: [1, 1, 1, 2, 3, 3], Target: 1
```
**Output:**
```
0
```

---

## 3. Square Root Using Binary Search
A problem that demonstrates how binary search can be applied to mathematical problems beyond array searching.

Find the **integer square root** of a given positive number using **binary search technique**. The integer square root is the **largest integer whose square** is less than or equal to the given number. Instead of checking every number from 1 to n, use binary search to **efficiently narrow down the search space**.

This demonstrates how **binary search can be applied to mathematical problems** and teaches **search space optimization** techniques used in **numerical algorithms and computational mathematics**.

**Your task:** Calculate integer square root using binary search on the solution space.

### Examples

**Input:**
```
16
```
**Output:**
```
4
```

---

**Input:**
```
27
```
**Output:**
```
5
```

---

**Input:**
```
49
```
**Output:**
```
7
```
