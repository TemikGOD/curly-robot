#include "OneList.h"
template<typename T>
OneList<T>::Node::Node(T _val)
{
	val = _val;
	next = nullptr;
}

template<typename T>
OneList<T>::Node::Node(const Node& node)
{
	val = node.val;
	next = node.next;
}

template<typename T>
OneList<T>::OneList()
{
	first = nullptr;
	last = nullptr;
}

template<typename T>
void OneList<T>::pushBack(T elem)
{
	Node n = new Node(elem);
	if (isEmpty)
	{
		first = n;
		last = n;
	}
	else
	{
		last->next = n;
		last = n;
	}
}

template<typename T>
void OneList<T>::pushFront(T elem)
{
	Node n = new Node(elem);
	if (isEmpty)
	{
		first = n;
		last = n;
	}
	else
	{
		n->next = first;
		first = n;
	}
}

template<typename T>
void OneList<T>::insert(size_t poz, T elem)
{
	if (isEmpty)
	{
		return;
	}
	else
	{
		Node n = new Node(T elem);
		n->next = first;
		int i = 0;
		while (i < poz)
		{
			if (n->next->next == nullptr)
				return;
			n->next = n->next->next;
			i++;
		}
		Node help = new Node(T elem);
		help->next = first;
		i = 0;
		while (i < poz - 1)
		{
			help->next = help->next->next;
			i++;
		}
		help->next->next = n;
	}
}

template<typename T>
void OneList<T>::reverse()
{

}


template<typename T>
bool OneList<T>::isEmpty()
{
	return first == nullptr;
}