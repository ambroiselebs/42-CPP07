/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 15:42:03 by aberenge          #+#    #+#             */
/*   Updated: 2025/09/15 15:45:40 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void	swap(T &a, T &b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T	min(T const &a, T const &b)
{
	if (a < b)
		return (a);
	return (b);
}

template<typename T>
T	max(T const &a, T const &b)
{
	if (a > b)
		return (a);
	return (b);
}

#endif
