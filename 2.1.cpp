#include "node.h"
#include <set>

void RemoveDup1(Node* head)
{
	set<int> dataset;
	Node* p = head;
	Node* q = head->next;
	
	dataset.insert(head->data);
	
	while (q)
	{
		if (dataset.find(q->data) == dataset.end())
		{
			dataset.insert(q->data);
			p = p->next;
			q = q->next;
			continue;
		}
		else
		{
			Node* tmp = q;
			p->next = q->next;
			q = p->next;
			delete tmp;
		}
	}
	dataset.clear();
}

void RemoveDup2(Node* head)
{
	Node* tar = head;
	while (tar)
	{
		int value = tar->data;
		Node* p = tar;
		Node* q = tar->next;
		while (q)
		{
			if (q->data == value)
			{
				Node* tmp = q;
				p->next = q->next;
				q = q->next;
				delete tmp;
			}
			else
			{
				p = p->next;
				q = q->next;
			}
		}
		tar = tar->next;
	}
	
}

int main(void)
{
	int n;
	cin >> n;
	int* a = new int[n];
	
	for (int i = 0; i < n; ++i)
		cin >> a[i];
	
	Node* head = InitLinkList(a, n);
	
	delete []a;
	
	PrintList(head);
	
	cout << endl;
	
	RemoveDup2(head);
	
	PrintList(head);
	
	return 0;
}
