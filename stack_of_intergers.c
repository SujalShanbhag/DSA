#include<stdio.h>
#include<stdlib.h>
#define size 5
struct stack{
    int top;
    int data[size];
};
typedef struct stack STACK;
void push(STACK *s,int item){
    if(s->top==size-1){
        printf("\nstack overflow");
    }
    else{
        s->top=s->top+1;
        s->data[s->top]=item;
    }
}
void pop(STACK *s){
    if(s->top==-1){
        printf("\nstack underflow");
    }
    else{
        printf("\nElement poped is %d",s->data[s->top]);
        s->top=s->top-1;
    }
}
void display(STACK s){
    if(s.top==-1){
        printf("\nstack empty");
    }
    else{
        printf("\nstack content are:\n");
        for(int i=s.top;i>=0;i--){
            printf("%d\n",s.data[i]);
        }
    }
}
int main(){
    int ch,item;
    STACK s;
    s.top=-1;
    printf("\n1.push\n2.pop\n3.display\n4.exit\n");
    for(;;){
        printf("\nRead choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1:printf("Read element to be pushed:");
                   scanf("%d",&item);
                   push(&s,item);
                   break;
            case 2:pop(&s);
                   break;
            case 3:display(s);
                   break;
            default:exit(0);
        }
    }
    return 0; 
}