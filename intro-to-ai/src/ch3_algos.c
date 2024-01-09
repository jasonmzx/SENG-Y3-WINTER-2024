#include <stdio.h>
#include <stdlib.h> // For malloc
#include <stdbool.h> // For bool type

//* ----------------- TREE IMPL --------------------

typedef struct node { //defines a new struct type named "node"
    char value;

    //Node Pointers
    struct node* left; 
    struct node* right; 

} node; //Alias for struct


node* createNode(char value) {
     // malloc(size...) is always of (void*) type, VOID Ptr
     //So we need to cast to (node*) NODE Ptr
    node* newNode = (node*)malloc(sizeof(node));

    newNode->value = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

void buildTree(node* root) {

    //* === LEFT SUBTREE Generation ===
    node* left_subtree = createNode('B');

    node* node_c = createNode('C');
    node_c->left = createNode('D');
    node_c->right = createNode('E');

    left_subtree->left = node_c;
    left_subtree->right = createNode('F');

    root->left = left_subtree;

    //* === RIGHT SUBTREE Generation ===
    node* right_subtree = createNode('G');

    node* node_H = createNode('H');
    node_H->left = createNode('I');
    node_H->right = createNode('J');

    right_subtree->left = node_H;

    node* node_L = createNode('L');
    node_L->left = createNode('M');
    node_L->right = createNode('N');

    right_subtree->right = node_L;

    root->right = right_subtree;
}

//* ----------------- STACK IMPL --------------------

// TOP
// [treeNode] -> [treeNode] -> [treeNode] -> NULL

typedef struct stackNode {
    node* treeNode;
    struct stackNode* next;
} stackNode;

stackNode* createStackNode(node* treeNode) {
    stackNode* newStackNode = (stackNode*)malloc(sizeof(stackNode));

    newStackNode->treeNode = treeNode;
    newStackNode->next = NULL;
    
    return newStackNode;
}

//! If you want to modify the pointer itself (like changing where it points to), you need to pass a pointer to the pointer.

void stackPush(stackNode** stackHead, node* treeNode) {
    stackNode* newStackHead = createStackNode(treeNode);
    newStackHead->next = *stackHead; //*DEREF, next is pointing to the old head's pointer, not PTR of PTR
    
    *stackHead = newStackHead; //Set Pointer of old stack head to be new one (must deref)
}

node* stackPop(stackNode** stackHead) {

    stackNode* d_stackHead = *stackHead;
    
    if(d_stackHead == NULL){
        return NULL;
    }

    //Extract & Remove current Head
    node* oldHeadTreeNode = d_stackHead->treeNode; 
    *stackHead = (*stackHead)->next; //* Brackets are needed, as we 1. Deref within brackets first, 2. grab ->next, 3. assign derefenced stackhead
    
    free(d_stackHead);
    return oldHeadTreeNode;

}

bool isStackEmpty(stackNode* top) {
    return (top == NULL);
}

//* ----------------- Queue (FIFO) IMPL --------------------

node* queuePop(stackNode** queueHead) {

    if(*queueHead == NULL) { //! Empty Queue
        return NULL;
    }

    if((*queueHead)->next == NULL) { //! Only one element in the queue
        node* lastNode = (*queueHead)->treeNode;
        free(*queueHead);
        *queueHead = NULL;
        return lastNode;
    }

    // Find the second-to-last node
    stackNode* current = *queueHead;
    while(current->next->next != NULL) {
        current = current->next;
    }

    //* 'current' is now the second-to-last node

    node* lastNode = current->next->treeNode;

    free(current->next); // Free the last stackNode
    current->next = NULL; // Set the next of second-to-last node to NULL
    
    return lastNode;
}


//* --------------- Actual Algorithms ! ----------------

//DFS: Big Oh = O( |V| + |E| ) , O(N) roughly, (V: vertices, E: edges/conns)

void DFS(node* root) {
    stackNode* stack = NULL;
    stackPush(&stack, root); // Push Root Node on Stack

    while(!isStackEmpty(stack)) {

        node* currentNode = stackPop(&stack); //Pop Top of Stack

        if(currentNode != NULL) { //If something was popped, pop that elements right & left children (if applicable)!
            printf("%c ", currentNode->value);

            if(currentNode->right != NULL) stackPush(&stack, currentNode->right);
            if(currentNode->left != NULL)  stackPush(&stack, currentNode->left);
        }
    }
}

//BFS: Time complexity todo

void BFS(node* root) {
    stackNode* queue = NULL;
    stackPush(&queue, root); // Push Root Node on Queue

    while(!isStackEmpty(queue)) {

        node* currentNode = queuePop(&queue); //Pop Last elm off Queue

        if(currentNode != NULL) { //If something was popped, pop that elements right & left children (if applicable)!
            printf("%c ", currentNode->value);

            if(currentNode->right != NULL) stackPush(&queue, currentNode->right);
            if(currentNode->left != NULL)  stackPush(&queue, currentNode->left);
        }
    }
}


int main(int argc, char *argv[]) {

    //****** TREE BUILDING ******
    node* root = createNode('A');
    buildTree(root);
    printf("DFS Traversal: ");
    DFS(root);
    printf("\n\n");

    printf("BFS Traversal: ");
    BFS(root);
    printf("\n\n");

    return 0;

}
