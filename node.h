#ifndef _NODE_H_
#define _NODE_H_

#include <iostream>

using namespace std;

typedef struct node {
	int data;
	struct node* next;
} Node;

Node* InitLinkList(int a[], int n)
{
	Node* head;
	Node* p;
	for (int i = 0; i < n; ++i)
	{
		Node* node = new Node();
		node->data = a[i];
		if (i == 0)
		{
			head = p = node;
			continue;
		}
		p->next = node;
		p = node;
	}
	p->next = NULL;
	return head;
}

Node* FindByValue(Node* head, int value)
{
	Node* p = head;
	while (p)
	{
		if (p->data == value)
			return p;
		p = p->next;
	}
	return p;
}

void PrintList(Node* head)
{
	while (head)
	{
		std::cout << head->data << " ";
		head = head->next;
	}
}

#endif
