#include <iostream>
#include "Array.hpp"

Array::Array<T>() _array(NULL) {}

Array::Array<T>(const unsigned int n)
{
	this->_array = new T[n];
}

Array::Array<T>(const Array &copy)
{
	*this = copy;
}

Array& Array::operator=(const Array &change)
{
	for (unsigned int i = 0; i < n; i++)
		this->_array[i] = change->_array[i];
	return (*this);
}

Array::~Array<T>()
{
	delete [] this->_array;
}

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}