#include "StackOnMassive.h"

template <typename T>
StackOnMassive<T>::StackOnMassive()
{
	top = -1;
	capacity = top + 1;
	arr = {};
}

template <typename T>
StackOnMassive<T>::StackOnMassive(T* _arr, size_t _capacity)
{
	for (int i = 0; i < capacity; i++)
		arr[i] = _arr[i];
	capacity = _capacity;
	top = capacity - 1;
}

template <typename T>
StackOnMassive<T>::StackOnMassive(const StackOnMassive& _stack)
{
	for (int i = 0; i < capacity; i++)
		arr[i] = _stack.arr[i];
	capacity = _stack.capacity;
	top = _stack.top;
}

template <typename T>
StackOnMassive<T>::~StackOnMassive()
{
	delete[] arr;
}

template <typename T>
bool StackOnMassive<T>::isEmpty()
{
	return capacity == 0;
}

template <typename T>
void StackOnMassive<T>::push(T _newTop)
{
	arr[++top] = _newTop;
	capacity++;
}

template <typename T>
T StackOnMassive<T>::pop()
{
	if (isEmpty())
		return;
	else
	{
		return arr[top--];
		capacity--;
	}
}

template <typename T>
T StackOnMassive<T>::peak()
{
	if (isEmpty())
		return;
	else
		return arr[top];
}

template <typename T>
void StackOnMassive<T>::pushToCenter(T _elem)
{
	if (isEmpty())
		return;
	else
	{
		size_t cap = capacity;
		StackOnMassive<T> help;
		while (cap / 2 <= top)
		{
			help.push(pop());
		}
		push(_elem);
		while (capacity != cap + 1)
		{
			push(help.pop());
		}
	}
}

template <typename T>
void StackOnMassive<T>::reverse()
{
	StackOnMassive help = this;
	while (!isEmpty)
	{
		pop();
	}
	while (!help.isEmpty)
	{
		push(help.pop());
	}
}