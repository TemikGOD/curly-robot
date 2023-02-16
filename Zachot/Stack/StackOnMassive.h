#pragma once
template <typename T>
class StackOnMassive
{
private:
	T* arr;
	int top;
	size_t capacity;
public:
	StackOnMassive();
	StackOnMassive(T* _arr, size_t _capacity);
	StackOnMassive(const StackOnMassive& _stack);
	~StackOnMassive();
private:
	void push(T _newTop);
	T pop();
	T peak();
	bool isEmpty();
	void pushToCenter(T _elem);
	void reverse();
};

