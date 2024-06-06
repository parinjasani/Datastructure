#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left,*right;
};

typedef struct Node Node;

Node *create(int data)
{
    Node* node1=(Node*)malloc(sizeof(Node));
    node1->data=data;
    node1->left=NULL;
    node1->right=NULL;
    return node1;
}

void printtree(Node *p, int level,int target)
{
    if(p==NULL)
    { 
        return;
    }
    
    printtree(p->right, level + 1,target);
    for (int i = 0; i < level; i++)
    {
        printf("    ");
    }
    if(p->data == target){
        printf("*");
    }
    printf("%d\n", p->data);
    printtree(p->left, level + 1,target);
}


int main()
{
    
    Node *root=create(20);

    root->left=create(45);
    
    root->right=create(67);

    printtree(root,0,67);


    
    return 0;
}
