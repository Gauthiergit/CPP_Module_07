/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 10:48:53 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/22 10:48:53 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <stdlib.h>
#include <stdexcept>

template< typename T >
class Array
{
	private:

	T *_array;

	public:

	Array() : _array(NULL) {}

	Array<T>(const unsigned int n)
	{
		this->_array = new T[n];
	}

	Array(const Array &copy)
	{
		*this = copy;
	}

	~Array()
	{
		delete [] this->_array;
	}

	template< size_t N>
	size_t size(T (&)[N]) {return N;}

	Array& operator=(const Array &change)
	{
		size_t size_cur = Array::size(this->_array);
		size_t size_change = Array::size(change._array);
		if (size_cur <= size_change)
		{
			for (unsigned int i = 0; i < size_cur; i++)
				this->_array[i] = change->_array[i];
		}
		return (*this);
	}

	T& operator[](size_t index)
	{
		size_t size = Array::size(this->_array);
    	if (index >= size)
            throw std::out_of_range("Index out of bounds");
        return this->_array[index];
    }

};

#endif