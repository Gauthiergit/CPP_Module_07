/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 15:59:05 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/24 17:11:55 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main( void )
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
	bool _true = true;
	bool _false = false;
	::swap(_true, _false);
	std::cout << "_true = " << _true << ", _false = " << _false << std::endl;
	std::cout << "min( _true , _false ) = " << ::min( _true, _false ) << std::endl;
	std::cout << "max( _true , _false) = " << ::max( _true, _false ) << std::endl;
	return 0;
}
