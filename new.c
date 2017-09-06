#include<stdio.h>
#define MAX_SIZE 10
int stack [MAX_SIZE], top=-1;
//returns true if stack is full else false
int isFull(){
return top==MAX_SIZE-1;
}
//returns if stack is empty else false
int isEmpty(){
return top==-1;
}
//return element at the top of stack
int peek(){
	if(!isEmpty())
		return stack[top];
	else {
		printf("stack is empty. returning -1");
		return -1;
		}
}
void push(int e){
	if(!isFull()){
		stack[++top]=e; 
		printf("element is succesfully inserted");
	}
	else {
		printf("\nstack overflow. Element cannot be inserted ");
	}
}

int pop(){
	int d;
	if(!isEmpty()){
		d = stack[top--];
		return d;
	}
	else{
		printf("stack underflow no element to delete. returning -1");
		return -1;
	}
}

int main(){
 
int choice,e;
	do{
	printf("\n please enter your choice");
	printf("\n1.push \n2.pop \n3.peek \n4.Exit\n");
	scanf("%d",&choice);
	switch(choice){
	case 1:
		printf("\n please enter the element to be inserted");
		scanf("%d",&e);
		push(e);
	case 2:
		e=pop();
		printf("\n the  element deleted is %d",e);
		break;
	case 3:
		e=peek();
		printf("\n element at the top of stack is :%d",e);
		break;
	case 4:
		return 0;
		break;
		
	default:
		printf("\n invalid choice");
		break;
	}

}while(1);

	return 0;
}

