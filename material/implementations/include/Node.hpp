#ifndef TREE_NODE_HPP
#define TREE_NODE_HPP

#include <array>
#include <string>
#include <iostream>

using std::array;
using std::string;

// Template class for Node
template<class DataType, size_t ContainerSize>
class Node {
    private:
        bool _isEmpty;
        Node<DataType, ContainerSize>* _left;
        Node<DataType, ContainerSize>* _right;
        array<DataType, ContainerSize> _container;

    public:
        // Constructors
        Node();
        Node(const DataType& value);
        Node(const DataType& value, Node* left, Node* right);

        // Setters
        void setLeft(Node* left);
        void setRight(Node* right);
        void setValue(const DataType& value);

        Node* insertLeft(const DataType& value);
        Node* insertRight(const DataType& value);

        // Getters
        Node* getLeft() const;
        Node* getRight() const;
        DataType getValue() const;

        // Methods
        void display() const;
        string toString() const;

        bool isEmpty() const;
        bool isNotEmpty() const;

        // Destructor
        ~Node();
};

#include "../source/Node.cpp"

#endif // TREE_NODE_HPP
