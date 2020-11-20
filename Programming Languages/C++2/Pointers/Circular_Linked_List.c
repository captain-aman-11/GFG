#include <stdio.h>
#include <stdlib.h>

//Function Declarations
void insertAtBeginning(int);
void insertAtEnd(int);
void insertAtAfter(int, int);

void deleteBeginning();
void deleteEnd();
void deleteSpecific();
void display();

struct Node
{
  int data;
  struct Node *next;
} *head = NULL; // Define a Node pointer 'head' and set it to NULL

int main()
{
  int choice1, choice2, value, location;
  while (1)
  {
    printf("\n***************** MENU ******************\n");
    printf("1.Insert\n 2.Delete\n 3. Display\n 4.Enter your Choice: ");
    scanf("%d", &choice1);
    switch (choice1)
    {
    case 1:
      printf("Enter the value to be Inserted: ");
      scanf("%d", &value);
      while (1)
      {
        printf("\nSelect from the following Inserting Options\n");
        printf("\n1. At Beginning\n 2. At End\n 3.After a Node\n 4.Cancel\n Enter your Choice");
        scanf("%d", &choice2);
        switch (choice2)
        {
        case 1:
          insertAtBeginning(value);
          break;

        case 2:
          insertAtEnd(value);
          break;

        case 3:
          printf("Enter the location after which you want to insert: ");
          scanf("%d", &location);
          insertAtAfter(value, location);
          break;

        case 4:
          goto EndSwitch;
        default:
          printf("\nPlease Select correct Inserting Option!!!!\n");
        }
      }
    case 2:
      while (1)
      {
        printf("Select from the following Deleting Options\n");
        printf("1.At Beginning\n 2.At End\n 3.At Specific Node\n 4.Cancel\n Enter your Choice:");
        scanf("%d", &choice2);
        switch (choice2)
        {
        case 1:
          deleteBeginning();
          break;
        case 2:
          deleteEnd();
          break;
        case 3:
          printf("Enter the node value to be deleted:");
          scanf("%d", &location);
          deleteSpecific(location);
          break;
        case 4:
          goto EndSwitch;
        default:
          printf("\nPlease select correct Deleting Option!!!!\n");
        }
      }
    EndSwitch:
      break;
    case 3:
      display();
      break;
    case 4:
      exit(0);
    default:
      printf("\nPlease select correct option!!!");
    }
  }
}

void insertAtBeginning(int value)
{
  struct Node *newNode;
  newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->data = value;
  if (head == NULL)
  { // head has been initialized while making node with struct
    head = newNode;
    newNode->next = head;
  }
  else
  {
    struct Node *temp = head;
    while (temp->next != head)
    {
      temp = temp->next;
    }
    newNode->next = head;
    head = newNode;
    temp->next = head;
  }
  printf("\nInsertion Completed");
}

void insertAtEnd(int value)
{
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->data = value;
  if (head == NULL)
  {
    head = newNode;
    newNode->next = head;
  }
  else
  {
    struct Node *temp = head; // Remember to initialize the temp pointer with head
    while (temp->next != head)
    {
      temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
  }
  printf("\nInsertion Completed");
}

void insertAtAfter(int value, int location)
{
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->data = value;
  if (head == NULL)
  {
    head = newNode;
    newNode->next = head;
  }
  else
  {
    struct Node *temp = head;
    while (temp->data != location)
    {
      if (temp->next == head)
      {
        printf("Given node is not found in the list!!!!");
      }
      else
      {
        temp = temp->next;
      }
    }
    if (temp->next == head)
    { // Checking whether the node is last node
      temp->next = newNode;
      newNode->next = head;
    }
    else
    {
      newNode->next = temp->next;
      temp->next = newNode;
    }
    printf("\nInsertion completed");
  }
}

// void deleteBeginning(){
//   if(head == NULL){
//     printf("\nList is Empty");
//     return;
//   }
//   else{
//     struct Node *temp1 = head;
//     struct Node *temp2 = head;
//
//     if(temp1 -> next == head){
//       head = NULL;
//       free(temp1);
//     }
//     else{
//       while(temp1 -> next != head){
//         temp = temp -> next;
//       }
//       head = temp2 -> next;
//       temp1 -> next = head;
//       free(temp2);
//     }
//   }
// }

void deleteBeginning()
{
  if (head == NULL)
  {
    printf("\nList is Empty");
  }
  else
  {
    struct Node *temp = head;
    if (temp->next == head)
    {
      head = NULL;
      free(temp);
    }
    else
    {
      head = head->next;
      free(temp);
    }
    printf("\nDeletion Completed");
  }
}

void deleteEnd()
{
  if (head == NULL)
  {
    printf("\nList is Empty");
  }
  else
  {
    struct Node *temp1 = head;
    struct Node *temp2 = head;

    if (temp1->next == head)
    {
      head = NULL;
      free(temp1);
    }
    else
    {
      while (temp1->next != head)
      {
        temp2 = temp1;
        temp1 = temp1->next;
      }
      temp2->next = head;
      free(temp1);
    }
    printf("\n Deletion Completed");
  }
}

void deleteSpecific(int delValue)
{
  if (head == NULL)
  {
    printf("\nList is Empty");
  }
  else
  {
    struct Node *temp1 = head;
    struct Node *temp2 = head;

    while (temp1->data != delValue)
    {
      if (temp1->next == head)
      {
        printf("\nNode not found");
      }
      else
      {
        temp2 = temp1;
        temp1 = temp1->next;
      }
    }
    if (temp1->next == head)
    {
      head = NULL;
      free(temp1);
    }
    else
    {
      if (temp1 == head)
      {
        temp2 = head;
        while (temp2->next != head)
        {
          temp2 = temp2->next;
        }
        head = head->next;
        temp2->next = head;
        free(temp1);
      }
      else
      {
        if (temp1->next == head)
        {
          temp2->next = head; // Coz temp2 is one node behind of temp1
          free(temp1);
        }
        else
        {
          temp2->next = temp1->next;
          free(temp1);
        }
      }
    }
    printf("\n Deletion Completed");
  }
}

void display()
{
  if (head == NULL)
  {
    printf("\nList is Empty");
  }
  else
  {
    struct Node *temp = head;
    printf("\n List Elements are; \n");
    while (temp->next != head)
    {
      printf("%d --> ", temp->data);
    }
    printf("%d --> %d", temp->data, head->data);
  }
}
