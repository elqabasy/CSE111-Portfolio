#ifndef TREE_TREE_HPP
#define TREE_TREE_HPP

#include "Node.hpp"
#include <iostream>
#include <string>
using std::string;
using std::cout;

// Tree class template
template <class DataType, size_t ContainerSize>
class Tree {
    private:
        Node<DataType, ContainerSize>* _root;

        bool* compare(const DataType& a, const DataType& b);

        void insertHelper(Node<DataType, ContainerSize>*& node, const DataType& value);

        Node<DataType, ContainerSize>* removeHelper(Node<DataType, ContainerSize>* node, const DataType& value);

        Node<DataType, ContainerSize>* searchHelper(Node<DataType, ContainerSize>* node, const DataType& value) const;

    public:
        // Constructor
        Tree();

        // Setters
        void insert(const DataType& value);
        void remove(const DataType& value);

        // Search with a custom operation on found node
        bool find(const DataType& value, void (*operation)(Node<DataType, ContainerSize>*));

        // Check if tree is empty
        bool isEmpty() const;
        bool isNotEmpty() const;

        // Recursive helper to destroy the tree
        void destroy(Node<DataType, ContainerSize>* node);
        Node<DataType, ContainerSize>* search(const DataType& value) const;

        
        void display() const;
        string toString() const;

        // Destructor
        ~Tree();
    };

#include "../source/Tree.cpp"

#endif // TREE_TREE_HPP
