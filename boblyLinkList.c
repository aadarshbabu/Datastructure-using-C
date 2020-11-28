#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *next, *prv;
};

struct node *createNode()
{
    struct node *temp;
    temp = malloc(sizeof(struct node));
    printf("Enter a value");
    scanf("%d", &temp->data);
    temp->next = NULL;
    temp->prv = NULL;

    return (temp);
}

struct node *start = NULL;
//Insert Data in at the end..

void insertAtEnd()
{
    struct node *NN;
    struct node *LN;
    NN = createNode();

    if (start == NULL)
        start = NN;

    else
    {
        LN = start;
        while (LN->next != NULL)
        {
            LN = LN->next;
        }
        LN->next = NN;
        NN->prv = LN;
    }
}

//insert data at the beg.
struct node *NN;
void insertAtBeg()

{
    NN = createNode();

    if (start == NULL)
    {
        start = NN;
    }
    else
    {
        NN->next = start;
        start->prv = NN;
        start = NN;
    }
}

void deleteLastNode()
{
    struct node *LN, *PN;
    if (start == NULL)
    {
        printf("oohoo Link list is empty");
    }
    else
    {
        LN = start;
        while (LN->next != NULL)
        {
            PN = LN;
            LN = LN->next;
        }
        PN->next = NULL;
        LN->prv = NULL;
        free(LN);
    }
}

// insert data in Mid
void insertAtMid()
{
    int NodeValue;
    struct node *CN, *NN;
    printf("Enter a Node Value to insert new node ");
    scanf("%d", &NodeValue);

    if (start == NULL)
    {
        printf("oohooo Link list is empty First insert some value");
    }
    else
    {
        CN = start;
        while (NodeValue != CN->data && CN->next != NULL)
        {
            CN = CN->next;
        }
        if (CN->next == NULL)
        {
            if (CN->data == NodeValue)
            {
                printf("Oobhai Last Node value match hear\n");
                NN=createNode();
                CN->next=NN;
                NN->prv=CN;
            }
            else
            {
                printf("You Node value are not match in Link List");
                exit(0);
            }
        }
        else
        {
            NN = createNode();
            NN->next = CN->next;
            NN->next->prv = NN;
            NN->prv = CN;
            CN->next = NN;
        }
    }
}

//Deletion at the begnning
void deleteFirstNode()
{
    struct node *temp;
    if (start == NULL)
    {
        printf("node is empty");
    }
    else
    {
        temp = start;
        start = start->next;
        start->prv = NULL;
        free(temp);
    }
}
//view node data.......
void view()
{
    struct node *temp;
    if (start == NULL)
        printf("\nLIst is empty YOU Cant view");
    else
    {
        temp = start;
        while (temp->next != NULL)
        {
            printf("link list data\n");
            printf("%d \n", temp->data);
            temp = temp->next;
        }
        printf("%d \n", temp->data);
    }
}

int main()
{

    insertAtEnd();
    insertAtEnd();
    insertAtEnd();
    // insertAtEnd();
    // insertAtEnd();
    // insertAtEnd();
    // insertAtMid();
    insertAtMid();
    view();
}
