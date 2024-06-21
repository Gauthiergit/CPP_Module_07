/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 16:46:59 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/21 17:53:43 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template< typename T >
void display(T &elem)
{
	std::cout << "Fonction called on '"<< elem << "' element from the array" << std::endl;
}

template< typename T >
void iter(T *array, int len, void (*f)(T &))
{
	for(int i = 0; i < len; i++)
		f(array[i]);
}

#endif