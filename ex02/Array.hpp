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
	size_t _size;

	public:

	Array() : _array(NULL), _size(0) {}

	Array(const unsigned int n)
	{
		this->_size = n;
		this->_array = new T[n];
	}

	Array(const Array &copy)
	{
		this->_array = new T[copy.size()];
		this->_size = copy.size();
		for (unsigned int i = 0; i < this->_size; i++)
			this->_array[i] = copy._array[i];
	}

	~Array()
	{
		delete [] this->_array;
	}

	unsigned int size() const {return this->_size;}

	Array& operator=(const Array &change)
	{
		delete [] this->_array;
		this->_array = new T[change.size()];
		this->_size = change.size();
		for (unsigned int i = 0; i < this->_size; i++)
			this->_array[i] = change._array[i];
		return (*this);
	}

	T& operator[](unsigned int index)
	{
    	if (index >= this->_size)
            throw std::out_of_range("Index out of bounds");
        return this->_array[index];
    }

};

#endif