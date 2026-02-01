# 📘 Concepts Needed to Crack **Brown Problems**

This repository documents the **algorithms, mathematical tools, data structures, and heuristics**
that repeatedly appeared while solving **Brown-level competitive programming problems**.

Think of this as a **revision checklist + concept index**, not a linear syllabus.

---

## 🧠 Core Mathematical & Logical Tools

1. Floor / Ceil / Absolute Value Inequality Translation  
2. Pigeonhole Principle  
3. Modular Arithmetic  
4. Linear Congruence Theorem *(very important — strong geometric meaning)*  
5. Inverse of a Permutation  
6. Run Length Encoding (RLE)

---

## 🔍 Search & Enumeration Techniques

7. Binary Search on Beatty-type Sequences  
8. Bit Enumeration  
9. Recursive Functions for Complete Search  

---

## 📐 Dynamic Programming (DP)

10. DP on DAG  
11. Subsequence DP *(Pascal’s Triangle intuition)*  
12. LAP DP  
13. Reachability DP (Boolean DP)  
    - Bitset optimization  
    - Also known as partial sum DP / subset DP  

---

## 🌳 Graph Algorithms

14. DFS / BFS / Dijkstra  
15. Topological Sort (Kahn’s Algorithm)

---

## 🧮 Number Theory & Precomputation

16. Sieve of Eratosthenes  
17. Linear Sieve  
18. FPS (Formal Power Series)

---

## 🧰 Data Structures

19. DSU (Disjoint Set Union)  
20. Weighted DSU  
21. Fenwick Tree (BIT) – inversion counting  
22. Merge Sort – inversion counting  
23. Segment Tree  
24. Lazy Segment Tree  
25. Order Statistics Tree  
26. Wavelet Tree *(appeared once; alternate approach)*

---

## 📊 Classical Algorithmic Patterns

27. Largest Area in Histogram  
28. Skyline / Dominance Technique  
29. Greedy Exchange Arguments  
    - Structural Optimization  
    - Dominance  
    - Examples: `Make10.cpp`, `Ice Tea Store.cpp`

---

## 🧭 Universal Problem-Solving Heuristic

> **Express local constraints in terms of invariants,  
> then connect them to global constraints.**

This idea explains why many seemingly ad-hoc solutions work.

---

# 📚 Important Resources

## 📐 Mathematics & Theory

- Competitive Programming Math Concepts  
  https://manabitimes.jp/math

### Pigeonhole Principle (Visual Intuition)
[![Pigeonhole Principle Explanation](https://img.youtube.com/vi/O3krHAFyxH4/0.jpg)](https://www.youtube.com/watch?v=O3krHAFyxH4)

- Linear Congruence & Related Ideas  
  https://drken1215.hatenablog.com/entry/2020/05/04/190252

---

## 🧩 Data Structures & Algorithms

- Weighted DSU (Dr. Ken)  
  https://qiita.com/drken/items/cce6fc5c579051e64fab

- Permutations for Beginners  
  https://nor-blog.pages.dev/posts/2023-01-09-permutations-for-beginners/

- Linear Sieve  
  https://rsk0315.github.io/library-rs/nekolib/math/struct.LinearSieve.html  
  https://atcoder.jp/contests/abc254/editorial/4079

---

## 📈 Advanced Techniques

- Formal Power Series (FPS)  
  https://maspypy.com/category/%e5%bd%a2%e5%bc%8f%e7%9a%84%e3%81%b9%e3%81%8d%e7%b4%9a%e6%95%b0%e8%a7%a3%e8%aa%ac

- Skyline / Dominance Technique  
  https://leetcode.com/problems/number-of-visible-people-in-a-queue/

- Reachability / Partial Sum DP  
  https://qiita.com/drken/items/a5e6fe22863b7992efdb

---

## 📝 Notes

- Wavelet Trees appear rarely and usually as an alternate approach  
- FPS and Linear Congruence require multiple passes to fully internalize  
- Most Brown problems reduce to **invariants + dominance + greedy exchange**

---

⭐ If this repository helped you, consider starring it.
