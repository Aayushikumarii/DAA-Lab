#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *left;
	struct node *right;
};

void inorder(struct node* node)
{
   if (node == NULL)
   return;
   inorder(node->left);
   printf("%d ", node->data);
   inorder(node->right);
}

void preorder(struct node* node)
{
   if (node == NULL)
   return;
   printf("%d ", node->data);
   preorder(node->left);
   preorder(node->right);
}

void postorder(struct node* node)
{
   if (node == NULL)
   return;
   postorder(node->left);
   postorder(node->right);
   printf("%d ", node->data);
}

struct node* insert(struct node* node, int key)
{
  if (node == NULL)
  {
 	struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = key;
    temp->left = temp->right = NULL;
    return temp;
  }
  if (key < node->data)
    node->left = insert(node->left, key);
  else if (key > node->data)
    node->right = insert(node->right, key);
  return node;
} 

void search(struct node* root, int key) {
  if (root == NULL)
  return ;
  
    if(root->data == key)
    {
      printf("KEY FOUND \n");
      return;
    }
    else if (root->data < key)
    {
      search(root->right, key);
      return;
    }
    else 
    {
      search(root->left, key);
      return;
    }

 	printf("Key Not Found. Inserting into BST\n");
    insert(root, key);
}

int main()
{
   struct node* root = NULL;
   int rootVal, n,value,number;
   printf("enter the value of root: ");
   scanf("%d", &rootVal);
   root = insert(root, rootVal);
   printf("enter total number of elements to be inserted");
   scanf("%d", &n);
   for(int i=0;i<n;i++)
   {
 	printf("enter a number  ");
 	scanf("%d", &value);
 	insert(root, value);
   }
   printf("enter a number to be searched  ");
   scanf("%d", &number);
   search(root,number);
   printf("Inorder Traversls:");
   inorder(root);
   printf("\n");
   printf("Preorder Traversls:");
   preorder(root);
   printf("\n");
   printf("Postorder Traversls:");
   postorder(root);
   printf("\n");
   return 0;
}
