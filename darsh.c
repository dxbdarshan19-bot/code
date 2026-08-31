#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
};
int main(){
struct node*head=NULL;
struct node*newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter data:");
scanf("%d",&newnode->data);
newnode->next=head;
head=newnode;

printf("Linked list:");
printf("%d->NULL",head->data);
free(newnode);
return 0;
}





