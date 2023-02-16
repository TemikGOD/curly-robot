#pragma once
template <typename T>
class QueueOnMassive
{
private:
	T* arr;
	size_t frontElem;
	size_t backElem;
public:
	QueueOnMassive();
	QueueOnMassive(T* _arr, size_t _front, size_t _back);
	QueueOnMassive(const QueueOnMassive& _queue);
	~QueueOnMassive();
private:
	void push(T _newTop);
	T pop();
	T front();
	T back();
	bool isEmpty();
	void pushToCenter(T _elem);
	void reverse();
};

