#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

struct LL
{
	int data;
	LL* next;
};
void fillLinkedList(LL* root, LL* iter, short& size);
void insertNode(const short pos,const int data, LL* root, LL* iter, short &size);
void printNodes(const short &size, LL* root, LL* iter);
void main()
{
	short size = 1000;
	LL* root = (LL*)malloc(sizeof(LL));
	root->data = -1;
	root->next = NULL;
	LL* iter = (LL*)malloc(sizeof(LL));
	
	//--------------------------------------------------------------//
	fillLinkedList(root, iter, size);
	printNodes(size, root, iter);
	for (int i = 0; i < 25; ++i)
	{
		insertNode(6, (rand()%200 + 100) , root, iter, size);
	}
	
	
	printNodes(size, root, iter);
	return;
}
void fillLinkedList(LL* root, LL* iter, short& size)//arguments: root, iterator, number of the linked lists.
{
	srand(time(0));
	iter = root;
	for (short i = 0; i < size; ++i)
	{
		iter->next = (LL*)malloc(sizeof(LL));
		iter->next->data = (rand() % 900 + 100);
		iter = iter->next;
	}
	iter->next = NULL;
}
void insertNode(const short pos, const int data, LL* root, LL* iter,short &size)//arguments: insert position, insert value, root, iterator, number of the linked lists.
{
	iter = root;
	
	for (short i = 0; i < pos-1; ++i)
	{
		iter = iter->next;
	}
	LL* node = (LL*)malloc(sizeof(LL));
	node->next = iter->next->next;
	iter->next->next = node;
	iter->next->next->data = data;
	iter = root;
	size++;

}
void printNodes(const short &size, LL* root, LL* iter)//arguments: number of the linked lists, root, iterator.
{
	iter = root->next;
	for (short i = 0; i < size; ++i)
	{
		cout << iter->data << " ";
		iter = iter->next;
	}
}
