/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 17:24:24 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/24 17:35:18 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	int array[4] = {0, 1, 2, 3};
	iter(array, 4, display<int>);

	std::cout << "--------------------------------------------" << std::endl;

	std::string tab[3] = {"Je", "Suis", "Fragile"};
	iter(tab, 3, display<std::string>);

	std::cout << "--------------------------------------------" << std::endl;

	float tab_bis[5] = {42.0f, 26.5f, 34.2f, 90.78f, 3.14f};
	iter(tab_bis, 5, display<float>);

	return 0;
}

