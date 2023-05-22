#pragma once

struct Node
{
	int data;
	Node* left;
	Node* right;

	Node(int data = 0, Node* left = nullptr, Node* right = nullptr) : data(data), left(left), right(right) {}
	Node(const Node &nod) : data(nod.data), left(nod.left), right(nod.right) {}
	~Node() { data = 0; }

	int getData() { return data; }
};

void newnode(Node* par, int data)
{
	Node* son = new Node(data, nullptr, nullptr);

	if (data > (*par).getData())
	{
		par->right = son;
	}
	else
	{
		par->left = son;
	}
}

