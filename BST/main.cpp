#include <iostream>

using namespace std;

//bst node
struct bstNode
{
    int data;
    bstNode* left;
    bstNode* right;
};

//create new bst node
bstNode* newNode(int value)
{
    bstNode* temp = new bstNode();
    temp->data = value;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

//insert
bstNode* Insert(bstNode *root, int value)
{
    if(root==NULL)
        root = newNode(value);
    else if(root->data>value)
        root->left = Insert(root->left,value);
    else
        root->right = Insert(root->right,value);
    return root;
}

//search
bool Search(bstNode *root, int value)
{
    if(root==NULL)
        return false;
    else if(root->data==value)
        return true;
    else if(root->data>value)
        return Search(root->left,value);
    else
        return Search(root->right,value);
}

//find minimum
bstNode* FindMin(bstNode* root)
{
    if(root->left==NULL)
        return root;
    else
        return FindMin(root->left);
}

//find maximum
bstNode* FindMax(bstNode* root)
{
    if(root->right==NULL)
        return root;
    else
        return FindMax(root->right);
}

//max item
int Max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}

int FindHeight(bstNode* root)
{
    if(root==NULL)
        return 0;
    else
        return Max(FindHeight(root->left),FindHeight(root->right))+1;
}

/***
Tree Traversal
***/

//pre order
void PreOrder(bstNode *root)
{
    if(root==NULL)
        return;
    cout << root->data << " ";
    PreOrder(root->left);
    PreOrder(root->right);
}

//in order
void InOrder(bstNode *root)
{
    if(root==NULL)
        return;
    InOrder(root->left);
    cout << root->data << " ";
    InOrder(root->right);
}

//post order
void PostOrder(bstNode *root)
{
    if(root==NULL)
        return;
    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->data << " ";
}
//Delete nodes
bstNode* Delete(bstNode* root, int item)
{
    if(root == NULL)
    {
        return root;
    }
    else if(item<root->data)
    {
        root->left = Delete(root->left,item);
    }
    else if(item>root->data)
    {
        root->right = Delete(root->right,item);
    }
    else
    {
        if(root->left == NULL && root->right == NULL)
        {
            delete root;
            root = NULL;
        }
        else if(root->left == NULL)
        {
            bstNode* temp = root;
            root = root->right;
            delete temp;
        }
        else if(root->right == NULL)
        {
            bstNode* temp = root;
            root = root->left;
            delete temp;
        }
        else
        {
            bstNode* temp = FindMin(root->right);
            root->data = temp->data;
            root->right = Delete(root->right,temp->data);
        }
    }
    return root;
}
//number of Nodes
int NumofNodes(bstNode* root)
{
    if(root==NULL)
        return 0;
    else
        return (NumofNodes(root->left)+NumofNodes(root->right))+1;

}

bstNode* findMinimum(bstNode* root)
{
    while (root->left)
    {
        root = root->left;
    }

    return root;
}

//InOrder Successor
void InOrderSuccessor(bstNode* root, bstNode*& suc, int item)
{
    if (root == NULL)
        return ;

    if (root->data == item)
    {
        if (root->right != NULL)
        {
            bstNode* temp = root->right ;
            while (temp->left)
                temp = temp->left ;
            suc = temp ;
        }
        return;
    }
    if (root->data > item)
    {
        suc = root ;
        InOrderSuccessor(root->left, suc, item) ;
    }
    else
    {
        suc = root ;
        InOrderSuccessor(root->right, suc, item) ;
    }
}

int main()
{
    bstNode* root = NULL, *temp = NULL;

    //value insert in BST
    root =  Insert(root,36);
            Insert(root,9);
            Insert(root,32);
            Insert(root,72);
            Insert(root,28);
            Insert(root,100);
            Insert(root,66);
            Insert(root,2);
            Insert(root,86);
            Insert(root,50);
            Insert(root,69);
            Insert(root,1);
            Insert(root,3);
            Insert(root,800);

    cout << "Bst root is: " << root->data << endl;

    //search value in BST
    bool s = Search(root,86);
    if(s)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;

    //find minimum value
    bstNode* f = FindMin(root);
    cout << "Minimum value: " << f->data << endl;

    //find maximum value
    bstNode* m = FindMax(root);
    cout << "Maximum value: " << m->data << endl;

    //Tree height
    int h = FindHeight(root);
    cout << "Height of the Tree: " << h << endl;

    //Pre Order Traversal
    cout << "PreOrder: ";
    PreOrder(root);
    cout << endl;

    //In Order Traversal
    cout << "InOrder: ";
    InOrder(root);
    cout << endl;

    //Post Order
    cout << "PostOrder: ";
    PostOrder(root);
    cout << endl;

    //delete item
    Delete(root,66);
    cout << "After delete an element(PostOrder(66)): ";
    PostOrder(root);
    cout << endl;


    //number of Nodes in BST
    int n = NumofNodes(root);
    cout << "Number of Nodes: " << n << endl;


    //Inorder Successor print
    InOrderSuccessor(root,temp,86);
    if(temp!=NULL)
    {
        cout << "Inorder successor(86): " << temp->data << endl;
    }
    else
    {
        cout << "The successor doesn't exist." << endl;
    }

    return 0;
}
