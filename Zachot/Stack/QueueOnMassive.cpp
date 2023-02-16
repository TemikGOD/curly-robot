#include "QueueOnMassive.h"
template <typename T>
QueueOnMassive<T>::QueueOnMassive()
{
	frontElem = 0;
	backElem = 0;
	arr = {};
}

template <typename T>
QueueOnMassive<T>::QueueOnMassive(T* _arr, size_t _frontElem, size_t _backElem)
{
	for (int i = 0; i < _backElem; i++)
		arr[i] = _arr[i];
	frontElem = _frontElem;
	backElem = _backElem;
}

template <typename T>
QueueOnMassive<T>::QueueOnMassive(const QueueOnMassive& _queue)
{
	for (int i = 0; i < _queue.backElem; i++)
		arr[i] = _queue.arr[i];
	frontElem = _queue.frontElem;
	backElem = _queue.backElem;
}

template <typename T>
QueueOnMassive<T>::~QueueOnMassive()
{
	delete[] arr;
}

template <typename T>
bool QueueOnMassive<T>::isEmpty()
{
	return frontElem == backElem;
}

template <typename T>
void QueueOnMassive<T>::push(T _newBack)
{
	arr[++backElem] = _newBack;
}

template <typename T>
T QueueOnMassive<T>::pop()
{
	if (isEmpty())
		return;
	else
		return arr[frontElem++];
}

template <typename T>
T QueueOnMassive<T>::front()
{
	if (isEmpty())
		return;
	else
		return arr[frontElem];
}

template <typename T>
T QueueOnMassive<T>::back()
{
	if (isEmpty())
		return;
	else
		return arr[backElem];
}

template <typename T>
void QueueOnMassive<T>::pushToCenter(T _elem)
{
	if (isEmpty())
		return;
	else
	{
		size_t center = frontElem + (backElem - frontElem) / 2;
		QueueOnMassive<T> help;
		while (frontElem != center)
		{
			help.push(pop());
		}
		help.push(_elem);
		while (!isEmpty)
		{
			help.push(pop());
		}
		while (!help.isEmpty)
		{
			push(help.pop());
		}
	}
}

template <typename T>
void QueueOnMassive<T>::reverse()
{
	
}