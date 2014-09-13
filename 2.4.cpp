#include "node.h"
#include <vector>

Node* AddList(Node* head1, Node* head2)
{
	Node* result = NULL;
	
	vector<int> sum_array;
	
	int step = 0;
	
	while (head1 != NULL && head2 != NULL)
	{
		int sum = head1->data + head2->data + step;
		sum_array.push_back(sum % 10);
		step = sum / 10;
		head1 = head1->next;
		head2 = head2->next;
	}
	while (head1 != NULL)
	{
		int sum = head1->data + step;
		sum_array.push_back(sum % 10);
		step = step / 10;
		head1 = head1->next;
	}
	while (head2 != NULL)
	{
		int sum = head2->data + step;
		sum_array.push_back(sum % 10);
		step = sum / 10;
		head2 = head2->next;
	}
	
	if (step != 0)
		sum_array.push_back(step);
	
	int len = sum_array.size();
	
	int* a = new int[len];
	
	for (int i = 0; i < len; ++i)
		a[i] = sum_array[i];
	result = InitLinkList(a, len);
	return result;
}

int main(void)
{
	int n1;
	cin >> n1;
	int* a1 = new int[n1];
	for (int i = 0; i < n1; ++i)
		cin >> a1[i];
	Node* head1 = InitLinkList(a1, n1);
	
	int n2;
	cin >> n2;
	int* a2 = new int[n2];
	for (int i = 0; i < n2; ++i)
		cin >> a2[i];
	Node* head2 = InitLinkList(a2, n2);
	
	Node* result = AddList(head1, head2);
	PrintList(result);
	
	return 0;
}
