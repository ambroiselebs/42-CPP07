/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 15:42:03 by aberenge          #+#    #+#             */
/*   Updated: 2025/09/15 15:55:38 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <cstddef>

template<typename T, typename F>
void	iter(T *array, size_t length, F func)
{
	for (size_t i = 0; i < length; i++)
		func(array[i]);
}

#endif
