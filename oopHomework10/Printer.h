#pragma once
template<typename T, int MAX = 10>
class Queue
{
	T _workers[MAX]{};
	int _front = -1;
	int _rear = -1;

public:
	friend class Printer;
	Queue() = default;

	void request(T element)
	{
		if (isFull())
			throw "Queue overflow";

		if (isEmpty())
			_front = 0;

		_workers[++_rear] = element;
	}


	void start()
	{
		if (isEmpty())
			throw "Queue underflow";

		_front++;

		if (_front > _rear)
			_front = _rear = -1;
	}


	T peek() const
	{
		if (isEmpty())
			throw "Queue is Empty";

		return _workers[_front];
	}

	int size() const
	{
		if (_front == -1)
			return 0;

		return _rear - _front + 1;
	}

	bool isEmpty() const { return size() == 0; }
	bool isFull() const { return size() == MAX; }


	const T* getContainer() const
	{
		return _workers;
	}
};


