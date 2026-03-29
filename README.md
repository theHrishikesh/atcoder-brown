# Concepts Needed to Crack **Brown Problems**

This repository documents the **algorithms, mathematical tools, data structures, and heuristics**
that repeatedly appeared while solving **Brown-level competitive programming problems**.

Think of this as a revision checklist + concept index, not a linear syllabus.

---

## Core Mathematics

1. Floor / Ceil / Absolute Value Inequality Translation  
2. Pigeonhole Principle  
3. Modular Arithmetic  
4. Linear Congruence Theorem *(very important — strong geometric meaning)*  
5. Inverse of a Permutation  
6. Combinatorics
7. Recurrence Relations
8. GCD Thoerems

---

## Search & Enumeration Techniques

1. Binary Search
2. Bit Enumeration  
3. Recursive Functions for Complete Search (using DFS - BFS)

---

## Dynamic Programming (DP)

1. DP on DAG  
2. Subsequence DP (Pascal’s Triangle intuition)
3. LAP DP  
4. Reachability DP (Boolean DP)
5. Grid DP
6. Counting using DP (Combinatorial Technique)

---

## Graph & Trees

1. DFS / BFS / Dijkstra  
2. Topological Sort (Kahn’s Algorithm)
3. Properties of Trees
4. Bipartite checking
5. DSU
6. Djikstra

---

## Number Theory & Precomputation

1. Sieve of Eratosthenes  
2. Linear Sieve  (Optional)
3. Formal Power Series (Optional)
---

## Data Structures

1. DSU (Disjoint Set Union)  
2. Weighted DSU  
3. Fenwick Tree (BIT) – inversion counting  
4. Merge Sort – inversion counting  
5. Segment Tree  
6. Lazy Segment Tree (optional)
7. Order Statistics Tree (for C++ users ; policy based DS)
8. Wavelet Tree *(appeared once; alternate approach availabe to solve such problems)*

---

## Classical Algorithmic Patterns

1. Largest Area in Histogram  
2. Skyline / Dominance Technique  
3. Greedy Exchange Arguments  
    - Structural Optimization  
    - Dominance  
    - Examples: `Make10.cpp`, `Ice Tea Store.cpp`

---

## Universal Problem-Solving Heuristic for Invariant Problems

> **Express local constraints in terms of invariants,  
> then connect them to global constraints.**

This idea explains why many seemingly ad-hoc solutions work. They are truly invariant problems.

---

# Important Resources

## Mathematics & Theory

- Nice blog on CP Math Concepts in a nutshell:  
  https://manabitimes.jp/mat

- Pigeonhole Principle (Visual Intuition)
[![Pigeonhole Principle Explanation](https://img.youtube.com/vi/O3krHAFyxH4/0.jpg)](https://www.youtube.com/watch?v=O3krHAFyxH4)

- Linear Congruence & Related Ideas  
  https://drken1215.hatenablog.com/entry/2020/05/04/190252

---

## Links related to Data Structures & Algorithms

- DSU
  https://youtu.be/1Z6uc5gwMrI?si=POL_zYDYp0sD5m5z

- Weighted DSU (Dr. Ken)  
  https://qiita.com/drken/items/cce6fc5c579051e64fab

- Permutations for Beginners  
  https://nor-blog.pages.dev/posts/2023-01-09-permutations-for-beginners/

- Linear Sieve  
  https://rsk0315.github.io/library-rs/nekolib/math/struct.LinearSieve.html  
  https://atcoder.jp/contests/abc254/editorial/4079

---

## Advanced Techniques Blogs

- Formal Power Series (FPS)  
  https://maspypy.com/category/%e5%bd%a2%e5%bc%8f%e7%9a%84%e3%81%b9%e3%81%8d%e7%b4%9a%e6%95%b0%e8%a7%a3%e8%aa%ac

- Skyline / Dominance Technique  
  https://leetcode.com/problems/number-of-visible-people-in-a-queue/

- Reachability / Partial Sum DP  
  https://qiita.com/drken/items/a5e6fe22863b7992efdb

---

## Notes

- Wavelet Trees appear rarely and usually as an alternate approach  
- FPS and Linear Congruence require multiple passes to fully internalize  
- Most Brown problems reduce to **invariants + dominance + greedy exchange**

---
