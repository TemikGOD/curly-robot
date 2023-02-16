#pragma once

template<typename T>
class OneList
{
private:
	class Node
	{
	private:
		T val;
		Node* next;
	public:
		Node(T _val);
		Node(const Node& node);
	};
	Node* first;
	Node* last;
public:
	OneList();
private:
	void pushBack(T elem);
	void pushFront(T elem);
	void insert(size_t poz, T elem);
	void reverse();
	bool isEmpty();
};

