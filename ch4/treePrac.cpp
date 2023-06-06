#ifndef TREE
#define TREE
template<typename Object> class TreeNode{
public:
    explicit TreeNode(Object d) : data{d}{
        
    }
protected:
    TreeNode<Object>* left;
    TreeNode<Object>* right;
    Object data;

};


#endif