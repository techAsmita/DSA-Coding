#include<iostream>
#include<queue>
using namespace std;
class node
{
    public:
    int data;
    node *leftchild;
    node *rightchild;
    node(int data)
    {
        this->data=data;
        leftchild=NULL;
        rightchild=NULL;
    }
};
node *binarytree(node *root)
{
    int data;
    cout<<"Enter data for root node: "<<endl;
    cin>>data;
    root=new node(data);
    if(data==-1)//no element 
    {
        return NULL;
    }
    cout<<"Enter element to be inserted in left of: "<<data<<endl;
    root->leftchild=binarytree(root->leftchild);
    cout<<"Enter element to be inserted in right of: "<<data<<endl;
    root->rightchild=binarytree(root->rightchild);
    return root;
}
// void levelorder(node *root)
// {
//     queue<node*> q;
//     q.push(root);
//     q.push(NULL);
//     while(!q.empty())
//     {
//         node *temp=q.front();
//         q.pop();
//         if(temp==NULL)//previous level completely traversed.
//         {
//             cout<<endl;
//             if(!q.empty())
//             {
//                 q.push(NULL);
//             }
//         }
//         else
//         {
//             cout<<temp->data<<" ";
//             if(temp->leftchild)
//             {
//                 q.push(temp->leftchild);
//             }
//             if(temp->rightchild)
//             {
//                 q.push(temp->rightchild);
//             }
//         }
//     }
// }
void preorder(node *root)//NLR
{
    //base case
    if(root==NULL)
    {
        return;
    }
    else
    {
        cout<<root->data<<" ";
        preorder(root->leftchild);
        preorder(root->rightchild);
    }
}
void inorder(node *root)//LNR
{
    //base case
    if(root==NULL)
    {
        return;
    }
    else
    {
        inorder(root->leftchild);
        cout<<root->data<<" ";
        inorder(root->rightchild);
    }
}
void postorder(node *root)//LRN
{
    //base case
    if(root==NULL)
    {
        return;
    }
    else
    {
        postorder(root->leftchild);
        postorder(root->rightchild);
        cout<<root->data<<" ";
    }
}
int main()
{
    node *rootnode=NULL;//empty tree.
    //creating tree
    rootnode=binarytree(rootnode);
    //DFS traversal techniques.
    cout<<"Inorder traversal is: "<<endl;
    inorder(rootnode); cout<<endl;
    cout<<"Preorder traversal is: "<<endl;
    preorder(rootnode); cout<<endl;
    cout<<"Postorder traversal is: "<<endl;
    postorder(rootnode);
}