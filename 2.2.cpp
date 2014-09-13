#include "node.h"


int BackwardK(Node* head, int k)
{
	Node* p = head;
	Node* q = head;
	while (k && p)
	{
		p = p->next;
		--k;
	}
	if (k > 0)
		return -1;
	else
	{
		while (p)
		{
			p = p->next;
			q = q->next;
		}
		return q->data;
	}
}


int main(void)
{
	int n;
	cin >> n;
	
	int k;
	cin >> k;
	
	int* a = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	
	Node* head = InitLinkList(a, n);
	
	PrintList(head);
	
	int backward_k = BackwardK(head, k);
	
	cout << backward_k;
	
	return 0;
}
