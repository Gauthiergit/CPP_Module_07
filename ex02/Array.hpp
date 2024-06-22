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

template< typename T >
class Array
{
	private:

	T *_array;

	public:
	Array<T>();
	Array<T>(const unsigned int n);
	Array<T>(const Array &copy);
	~Array<T>();

	Array& operator=(const Array &change);
	unsigned int size(const T *array);
};

#endif