# C
#include <stdio.h>
#include <stdlib.h>

struct node
   {
        int data;
        struct node *next;
   };
   void main()
   {
   struct node *newnode,*head,*temp;
   head = 0;
   int choice;
   while(choice)
   {
       newnode = (struct node *)malloc(sizeof(struct node));
       printf("Enter data");
       scanf("%d",&newnode->data);
       newnode->next = 0;
       if(head == 0)
       {
           temp = newnode;
           head = temp;
       }
       else
       {
           temp->next = newnode;
           temp = newnode;
       }
       printf("Do you want to continue? ");
       scanf("%d",&choice);
   }
   temp = head;
   while(temp != 0)
   {
       printf("%d",temp->data);
       temp = temp->next;
   }
   getch();
   }


