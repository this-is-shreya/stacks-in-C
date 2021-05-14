#include<stdio.h>
#include<math.h>

int top=-1;
void push(int ele, int ar[], int size){
    //printf("top is %d\n", top);
if(top>=(size-1)){
    printf("stack overflow\n");
}
else{
        top=top+1;
    ar[top]=ele;
//printf("arr[top] is %d\n",ar[top]);
}

}

int pop(int ar[]){
if(top==-1){
    printf("stack underflow\n");
}
else{

    return ar[top--];

}
}


int evaluate(char ar[], int len){
char stack[len];

for(int i=0;i<len;i++){


    if(ar[i]=='*' || ar[i]=='/' || ar[i]=='-' || ar[i]=='+' || ar[i]=='$'){

        int b= pop(stack)-'0';

        int a=pop(stack)-'0';
        int c;
        //printf("a is %d and b is %d \n",a,b);

        if(ar[i]=='*')

            c=a*b;

        else if(ar[i]=='/')
            c=a/b;
        else if(ar[i]=='-')
            c=a-b;
        else if(ar[i]=='+')
            c=a+b;
        else
            c=pow(a,b);

        //printf("val of c is %d\n",c);
        char result = c+'0';
        push(result,stack,len);


    }
    else{
        push(ar[i],stack,len);
    }

}
int ans= pop(stack)-'0';
return ans;
}

void main(){


printf("enter the length of the postfix expression\n");
int len;
scanf("%d",&len);
printf("Enter postfix expression: ");
char expression[len];
scanf("%s",&expression);
int ans= evaluate(expression, len);
printf("after evaluation we get %d ", ans);

}

