#include<iostream>
#include<string>
using namespace std;
struct node
{
    char data;
    node *left;
    node *right;
};
long long pre;
node* construct_tree(string preorder, string inorder,int inStart, int inFinal)
{
    if(inStart>inFinal)
    {
    return NULL;
    }
    long long i,inIndex;
    node *temp=new node;
    temp->data=preorder[pre++];
    for(i=inStart;i<=inFinal;i++)
    {
        if(inorder[i]==temp->data)
        {
        inIndex=i;
        }
    }
    temp->left=construct_tree(preorder,inorder,inStart,inIndex-1);
    temp->right=construct_tree(preorder,inorder,inIndex+1,inFinal);
    return temp;
}
void postorder_traversal(node *MyNewlyBuiltTree)
{
    if(MyNewlyBuiltTree==NULL)
        return;
    postorder_traversal(MyNewlyBuiltTree->left);
    postorder_traversal(MyNewlyBuiltTree->right);
    cout<<MyNewlyBuiltTree->data;
}
int main()
{
    string preorder,inorder,postorder;
    while(cin>>preorder>>inorder)
    {
        long long len_in=inorder.length();
        pre=0;
        node *MyTree;
        MyTree=construct_tree(preorder,inorder,0,len_in-1);
        postorder_traversal(MyTree);
        cout<<endl;
    }
return 0;
}
