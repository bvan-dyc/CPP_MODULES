#pragma once
#include <exception>

template<typename T>
class Array
{
private:
	unsigned int _size;
	T* _data;

public:
	Array<T>() : _size(0), _data(NULL) {};

	Array<T>(unsigned int n) : _size(n), _data(new T[n]) {};

	Array<T>(Array<T> const& src) {&this = src};

	~Array<T>() {delete _data};

	unsigned int size() {return _size};

	Array& operator=(Array const& rhs) {
		_size = rhs._size;
		delete _data;
		_data = new T[_size];
		for (int i = 0; i < _size; i++)
		{
			_data[i] = rhs._data[i];
		}
	};

	T& operator[](unsigned int index)
	{
		if (index >= _size)
			throw std::exception();
		return (_data[index]);
	}
};
