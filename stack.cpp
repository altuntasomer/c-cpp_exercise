#include <stdio.h>
#include <stdlib.h>
int array[2];
int size = 2;
int top = 0;
void push(int);
int pop();
void print();
int main()
{
	push(10);
	push(15);
	push(20);
	print();
	printf("%d ", pop());
	printf("%d ", pop());
	printf("%d ", pop());
	printf("%d ", pop());
	return 0;
}
void push(int data)
{
	
	array[top++] = data;
}
int pop()
{
	return array[--top];
}
void print()
{
	for (int i = 0; i < size; ++i)
	{
		printf("%d ", array[i]);
	}
}