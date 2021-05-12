#include<stdio.h>
#define MAX 6

int top=-1;
void push(int ele, int ar[], int size){
    //printf("top is %d\n", top);
if(top==(size-1)){
    printf("stack overflow\n");
}
else{
        top=top+1;
    ar[top]=ele;
//printf("arr[top] is %d\n",ar[top]);
}

}
void pop(int ar[]){
if(top==-1){
    printf("stack underflow\n");
}
else{
    top--;
}
}

void display(int ar[]){
if(top==-1){
    printf("the stack is empty\n");
}
else{
        printf("STACK-:\n");
    for(int i=top;i>=0;i--){
        printf("%d\n",ar[i]);
    }
}
}

void main(){
int a[MAX];

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
    push(b,a,MAX);
    break;
case 2:
    pop(a);
    break;
case 3:
    display(a);
    break;
case 4:
    exit(1);
    break;
    }
}

}
