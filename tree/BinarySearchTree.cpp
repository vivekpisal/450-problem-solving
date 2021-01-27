#include<iostream>
using namespace std;
class node
{
public:
	int data=0;
	node *right;
	node *left;
	node(int val)
	{data=val;right=NULL;left=NULL;}
	void insert(int val)
	{
		if(data==0)
		{
			if(val>data)
			{
				if(right==NULL)
					right=new node(val);
				else
					right->insert(val);
			}
			else
			{
				if(left==NULL)
					left=new node(val);
				else
					left->insert(val);
			}
		}
		else
			data=val;
	}
};
void show(node *root)
	{
		if(!root)
		{
			return;
		}
		cout<<root->data<<" ";

	}
int maxDepth(node* node)  
{  
    if (node == NULL)  
        return 0;  
    else
    {  
        /* compute the depth of each subtree */
        int lDepth = maxDepth(node->left);  
        int rDepth = maxDepth(node->right);  
      
        /* use the larger one */
        if (lDepth > rDepth)  
            return(lDepth + 1);  
        else return(rDepth + 1);  
    }  
}  
int  main()
{
	node root(30);
	root.insert(23);
	root.insert(21);
	root.insert(24);
	root.insert(45);
	root.insert(11);
	root.insert(67);
	maxDepth(&root);
	return 0;
}