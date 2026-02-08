<h2 align="center">Day 19 (04/07/2025)</h2>

## 1. Search in Rotated Array
A problem that introduces advanced search techniques and teaches how to maintain binary search efficiency in modified sorted structures.

You have a **sorted array** that has been rotated at some unknown pivot point. For example, the array [0,1,2,4,5,6,7] might become [4,5,6,7,0,1,2] after rotation. Write a function to search for a **target value** in this rotated sorted array and return its **index**. If the target is not found, return **-1**. The challenge is to maintain the **efficiency of binary search** even though the array is no longer fully sorted in the traditional sense.

This teaches **modified binary search algorithms** and **pivot-based searching** techniques that are essential for **handling rotated data structures and optimizing search operations**.

**Your task:** Implement efficient search in rotated sorted arrays using binary search principles.

### Examples

**Input:**
```
Array: [4, 5, 6, 7, 0, 1, 2], Target: 0
```
**Output:**
```
4
```

---

**Input:**
```
Array: [4, 5, 6, 7, 0, 1, 2], Target: 3
```
**Output:**
```
-1
```

---

**Input:**
```
Array: [11, 13, 15, 17, 19, 2, 3, 6, 7], Target: 6
```
**Output:**
```
7
```

---

## 2. Peak Element
A problem that demonstrates divide-and-conquer optimization techniques and teaches efficient local maximum finding without exhaustive searching.

A **peak element** in an array is an element that is **greater than both of its neighbors**. For elements at the edges of the array, they only need to be greater than their single neighbor. Find the **index** of any peak element in the given array. The array may contain **multiple peaks**, so returning the index of any one of them is acceptable. Try to solve this more efficiently than checking every element using **binary search approach**.

This introduces **local optimization algorithms** and **divide-and-conquer search** techniques crucial for **finding extrema efficiently and peak detection in data analysis**.

**Your task:** Find any peak element's index using efficient divide-and-conquer approach.

### Examples

**Input:**
```
[1, 3, 20, 4, 1, 0]
```
**Output:**
```
2
```

---

**Input:**
```
[1, 2, 1, 3, 5, 6, 4]
```
**Output:**
```
5
```

---

**Input:**
```
[10, 20, 15, 2, 23, 90, 67]
```
**Output:**
```
1
```

---

## 3. Search 2D Matrix
A problem that teaches multi-dimensional search optimization and demonstrates strategic positioning techniques for efficient matrix traversal.

You are given a **2D matrix** where each row is sorted in ascending order and each column is also sorted in ascending order. Write an efficient algorithm to search for a **target value** in this matrix. Return **true** if the target is found, **false** otherwise. The key insight is to start from a **strategic position** that allows you to eliminate either a complete row or column with each comparison, achieving optimal time complexity.

This teaches **2D search algorithms** and **matrix traversal optimization** techniques essential for **multi-dimensional data processing and spatial search operations**.

**Your task:** Search efficiently in sorted 2D matrix using strategic positioning approach.

### Examples

**Input:**
```
Matrix: [[1,4,7],[2,5,8],[3,6,9]], Target: 5
```
**Output:**
```
true
```

---

**Input:**
```
Matrix: [[1,4,7],[2,5,8],[3,6,9]], Target: 13
```
**Output:**
```
false
```

---

**Input:**
```
Matrix: [[1,3,5],[2,4,6],[7,8,9]], Target: 6
```
**Output:**
```
true
```
