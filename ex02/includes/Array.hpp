/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 17:54:32 by aberenge          #+#    #+#             */
/*   Updated: 2025/09/16 18:00:48 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template<typename T>
class Array
{
	private:
		T				*_elements;
		unsigned int	_size;
	public:
		Array(void);
		Array(unsigned int n);
		Array(const Array<T> &src);
		~Array();

		Array<T>	&operator=(const Array<T> &rhs);
		T			&operator[](unsigned int index);
		const T		&operator[](unsigned int index) const;

		unsigned int	size(void) const;

		class OutOfBoundsException : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return ("Index out of range");
				}
		};
};

# include "Array.tpp"


#endif
