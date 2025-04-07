<div align="center"><img src="https://github.com/ksyv/holbertonschool-web_front_end/blob/main/baniere_holberton.png"></div>

---

# 🌳 Binary Trees Project

Welcome to the **Binary Trees** project! This repository explores fundamental data structures in C, focusing on binary trees and their variations.

---

## 📚 Resources

Take time to explore the following references:

- [Binary tree](https://en.wikipedia.org/wiki/Binary_tree) *(Not to be confused with B-tree)*
- [Data Structure and Algorithms - Tree](https://www.geeksforgeeks.org/binary-tree-data-structure/)
- [Tree Traversal](https://www.geeksforgeeks.org/tree-traversals-inorder-preorder-and-postorder/)
- [Binary Search Tree](https://en.wikipedia.org/wiki/Binary_search_tree)
- [Binary Tree (visual explanation)](https://visualgo.net/en/bst)

---

## 🎯 Learning Objectives

By the end of this project, you should be able to explain (without Googling 👀):

### General
- 🌲 What is a **binary tree**
- 🔍 Difference between **binary tree** and **Binary Search Tree (BST)**
- ⚡ Time complexity gains compared to linked lists
- 📏 Define **depth**, **height**, and **size** of a binary tree
- 🔁 Know the **different traversal methods** (in-order, pre-order, post-order, level-order)
- 🎯 What makes a tree **complete**, **full**, **perfect**, or **balanced**

---

## ✅ Requirements

### General
- 🛠️ Editors: `vi`, `vim`, `emacs`
- 💻 Compiled on: **Ubuntu 20.04 LTS** with `gcc` and flags:
  ```bash
  -Wall -Werror -Wextra -pedantic -std=gnu89
  ```
- 📄 All files end with a new line
- 📘 A `README.md` file is **mandatory**
- 🎨 Follow **Betty style**:
  ```bash
  betty-style.pl && betty-doc.pl
  ```
- 🚫 No global variables
- 🧠 Max 5 functions per file
- 📚 Standard library usage allowed
- 🚫 `main.c` files are not graded (test locally, don’t push them)
- 📂 All prototypes must go in `binary_trees.h`
- 🔒 Header files must have include guards

---

## 🌐 GitHub

- 🧑‍🤝‍🧑 One repository per **group**
- ⚠️ Cloning/forking the wrong repo **before deadline = 0% score**

---

## 🧱 Data Structures

Include these in `binary_trees.h`:

```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;    /* Binary Search Tree */
typedef struct binary_tree_s avl_t;    /* AVL Tree */
typedef struct binary_tree_s heap_t;   /* Max Binary Heap */
```

📝 Note: For tasks 0 to 23, use **simple binary trees** (not BSTs). No sorting or ordering rules apply.

---

## 🖨️ Print Function

A provided print function is available **only** for visualizing trees. Do **not** push it or assume it’ll be used during correction.

---

Enjoy this trip through the branches and leaves of computer science. 🌿

---
