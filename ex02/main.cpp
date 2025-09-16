/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 18:08:53 by aberenge          #+#    #+#             */
/*   Updated: 2025/09/16 18:11:27 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	Array<std::string>	tab(4);

	tab[0] = "Salut";
	tab[1] = "On";
	tab[2] = "test";
	tab[3] = "42";

	std::cout << "Output : " << std::endl;
	for (unsigned int i = 0; i < tab.size(); i++)
		std::cout << tab[i] << std::endl;
	return (0);
}
