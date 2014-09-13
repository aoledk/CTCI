#include "node.h"

void DeleteSpeNode(Node* spe)
{	
	if (spe == NULL || spe->next == NULL) // avoid spe being the last node
		return;
	else
	{
		Node* tmp = spe->next;
		spe->data = tmp->data;
		spe->next = tmp->next;
		delete tmp;
	}
}

int main(void)
{
	int n;
	cin >> n;
	
	int value;
	cin >> value;
	
	int* a = new int[n];
	
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	
	Node* head = InitLinkList(a, n);
	
	PrintList(head);
	
	Node* spe = FindByValue(head, value);
	
	DeleteSpeNode(spe);
	
	PrintList(head);
	
	return 0;
}
