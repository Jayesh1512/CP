#include<stdio.h>
#define MAX 50


struct stack{
	int top,capacity;
	char arr[MAX];
};


void init(struct stack *s, int size){
	s -> top = -1 ;
	s -> capacity = size ; 
}


int push(struct stack *s, char element){
	s -> top += 1;
	
	if(s -> top <= ((s->capacity)-1)){
		s -> arr[s -> top] = element ;
		printf("Element inserted 👍️\n");
		return 1;
	}else{
		printf("Stack full 👎️\n");
		return -1;
	}
}

char pop (struct stack *s){
	if(s -> top == -1){
		printf("Empty Stack");
		return '\0' ;
	}else{
		char n = s -> arr[s-> top];
		s -> top -=1;
		return n;
	}
}


char peek(struct stack *s){
	if(s -> top == -1){
		return -1;
	}else{
		return s->arr[s->top];
	}
	
}

int main(){

	int n;
	char a[n];


	return 0;
}