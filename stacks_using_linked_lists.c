#include<stdio.h>
#include<stdlib.h>

struct stack{
int value;
struct stack *NEXT;
}*top;

typedef struct stack stack;

void push(int ele){
    stack *ptr=(stack *)malloc(sizeof(stack));
    ptr->value=ele;
    ptr->NEXT=top;
    top=ptr;
}

void pop(){
if(top==NULL){
    printf("stack is empty\n");
}
else{
    top=top->NEXT;
}

}
void display(){
stack *ptr= NULL;
ptr=top;
if(top==NULL){
    printf("stack is empty\n");
}
else{
printf("stack is \n");
while(ptr!=NULL){
    printf("%d\n",ptr->value);
    ptr=ptr->NEXT;
}
}
}

void main(){
while(1){
    printf("enter 1 to push an element\n");
    printf("enter 2 to pop an element\n");
    printf("enter 3 to display\n");
    printf("enter 4 to exit\n");
    int choice;
    scanf("%d",&choice);
    switch(choice){

case 1:
    printf("enter element\n");
    int b;
    scanf("%d",&b);
    push(b);
    break;
case 2:
    pop();
    break;
case 3:
    display();
    break;
case 4:
    exit(1);
    break;
    }
}

}
