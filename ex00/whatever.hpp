/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 15:57:41 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/21 16:27:54 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WATHEVER_HPP
# define WATHEVER_HPP

#include <iostream>

template< typename T >
void  swap(T & x, T & y)
{
	T temp = x;
	x = y;
	y = temp;
}

template< typename T >
T const min(T const& x, T const& y)
{
	return (x < y ? x : y);
}

template< typename T >
T const max(T const& x, T const& y)
{
	return (x > y ? x : y);
}

#endif