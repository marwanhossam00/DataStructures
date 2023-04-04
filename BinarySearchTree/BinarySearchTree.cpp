#include "BinarySearchTree.h"
#include <bits/stdc++.h>

using namespace std;

template<class T>
Node<T>::Node()
{
    left = right = NULL;
}

template<class T>
Node<T>::Node(T value)
{
    value = val;
    left = right = NULL;
}

template<class T>
BSTree<T>::BSTree(void)
{
    root = NULL;
}

template<class T>
bool BSTree<T>::contains(T val)
{
    Node<T>* tmp = findNode(val);
    return (tmp != NULL);
}

template<class T>
Node<T>* BSTree<T>::findNode(T val)
{
    Node<T>* temp = root;
    while(temp != NULL)
    {
        if(temp->value == val)
        {
            return temp;
        }
        else if(temp-> value < val)
        {
            // right
            temp = temp->right;
        }
        else
        {
            //left
            temp = temp->left;
        }

        return temp;
    }
}

template<class T>
void BSTree<T>::insert(T val)
{
    assert(contains(val) == false);
    Node<T> * nodeToBeAdded = new Node<T>(val);

    if(root == NULL)
    {
        root = nodeToBeAdded;
    }
    else
    {
        Node<T>* temp = root;
        while(true)
        {
            if(temp->value < val)
            {
                //right
                if(temp->right == NULL)
                {
                    temp->right = nodeToBeAdded;
                    break;
                }
                else
                {
                    temp = temp->right;
                }
            }
        }
    }
}
