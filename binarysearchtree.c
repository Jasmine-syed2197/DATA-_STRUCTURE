#include<stdio.h>
#include<stdlib.h>
struct tnode
{
    struct tnode *lchild;
    int data;
    struct tnode *rchild;
};
typedef struct tnode tnode;
tnode *getnode();
main()
{
    int a[100],i,n,item;
    tnode *root;
    clrscr();
    root=NULL;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    printf("\n Enter the elements...");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    Tinsert(&root,a[i]);
    printf("\n Binary Tree:\n");
    Tdisplay(root,1);
    printf("\n Inorder Traversal\n");
    Inorder(root);
    printf("\n Preorder Traversal\n");
    Preorder(root);
    printf("\n Postorder Traveral\n");
    Postorder(root);
    printf("\n Enter the element ot delete:");
    scanf("%d",&item);
    Tdelete(&root,item);
    printf("\n Binary tree after deleting:\n");
    Tdisplay(root,1);
    printf("Enter the elment to search:");
    scanf("%d",&item);
    Tsearch(item);
    getch();
}
Tinsert(tnode **rt, int item)
{
    tnode *current=(*rt), *temp;
    if((*rt)==NULL)
    {
        (*rt)=getnode();
        (*rt)->data=item;
        (*rt)->lchild=NULL;
        (*rt)->rchild=NULL;
        return;
    }
    while (current !=NULL)
    {
        if(item<current->data)
        {
            if(current->lchild !=NULL)
            current=current->lchild;
            else{
                temp=getnode();
                current->lchild=temp;
                temp->data=item;
                temp->rchild=NULL;
                temp->lchild-NULL;
                return;
            }
        }
        else{
            if(item>current->data)
            {
                if(current->rchild !=NULL)
                current=current->rchild;
                else{
                    temp=getnode();
                    current->rchild=temp;
                    temp->data=item;
                    temp->rchild=NULL;
                    temp->lchild-NULL;
                    return;
                }
            }
            else{
                printf("\n Wrong data...");
                exit(0);
            }
        }
    }
    Inorder (tnode *rt)
    {
        if(rt!= NULL)
        {
            Inorder(rt->lchild);
            printf("\t%d\t",rt->data);
            Inorder(rt->rchild);
        }
        else
        return;
    }
    Preorder (tnode *rt)
    {
        if(rt!= NULL)
        {
            printf("\t%d\t",rt->data);
            Preorder(rt->lchild);
            Preorder(rt->rchild);
        }
        else
        return;
    }
    Postorder (tnode *rt)
    {
        if(rt!=NULL)
        {
            Postorder(rt->lchild);
            Postorder(rt->rchild);
            printf("\t%d\t",rt->data);
        }
        else
        return;
    }
    Tdisplay (tnode *rt, int level)
    {
        int i;
        if((rt)!=NULL)
        {
            Tdisplay((rt)->rchild,level+1);
            printf("\n");
            for(i=0;i<level;i++)
            printf(" ");
            printf("%d",(rt)->data);
            Tdisplay((rt)->lchild,level+1);
        }
    }
    Tdelete (tnode **rt, int item)
    {
        tnode=*current;
        if(*rt==NULL)
        {
            printf("\nError");
            getch();
            return;
        }
        if(item<(*rt)->data)
        Tdelete(&((*rt)->lchild),item);
        else{
            if(item>(*rt)->data)
            Tdelete(&((*rt)->rchild),item);
            else{
                current=(*rt);
                if(current->rchild==NULL)
                {
                    (*rt)=(*rt)->lchild;
                    free(current);
                }
                else{
                    current=(*rt)->rchild;
                    while (current->lchild!=NULL)
                    current=current->lchild;
                    current->lchild=(*rt)->lchild;
                    current=(*rt);
                    (*rt)=(*rt)->rchild;
                    free(current);
                }
            }
        }
    }
}
Tsearch (int item)
{
    tnode *temp, *rootl
    if(root==NULL)
    {
        printf("\n Tree is empty");
        return;
    }
    if(item==root->data)
    {
        printf("\n Element found at root ");
        return;
    }
    else if (item<root->data)
    {
        printf("\n Elements found at left sub tree...");
        return;
    }
    else{
        printf("\n Elements found at right sub tree...");
        return;
    }
}
tnode *getnode()
{
    tnode *p;
    p=(tnode *)malloc(sizeof(tnode));
    return (p);
}
freenode(tnode *p)
{
    free(p);
}
