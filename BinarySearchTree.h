#include <bits/stdc++.h>

using namespace std;

#pragma once

enum Order
{
    INORDER = 0,
    PREORDER = 1,
    POSTORDER = 2,
    XOrder = 3
};

template <class T>
class Node
{
public:
    T value;
    Node<T>* left, *right;
    Node();
    Node(T value);
};

template <class T>
class BSTree
{
    Node<T>* root;
public:
    BSTree(void);
    ~BSTree(void);

    bool contains(T value);
    Node<T>* findNode(T value);
    void insert(T value);

    void traverse(Order order);

    void inOrder(Node<T> *node);
    void preOrder(Node<T> * node);
    void postOrder(Node<T> *node);

    void deleteBST(Node<T> *node);
};