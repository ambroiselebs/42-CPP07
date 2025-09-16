/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 17:58:38 by aberenge          #+#    #+#             */
/*   Updated: 2025/09/16 18:08:47 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

# ifndef ARRAY_HPP
#  include "Array.hpp"
# endif

template<typename T>
Array<T>::Array(void) : _elements(NULL), _size(0)
{}

template<typename T>
Array<T>::Array(unsigned int n) : _elements(NULL), _size(n)
{
	if (n > 0)
		this->_elements = new T[n](); // () pour remplir l'adresse memoire
}

template<typename T>
Array<T>::Array(const Array<T> &src) : _elements(NULL), _size(src._size)
{
	if (this->_size > 0)
	{
		this->_elements = new T[this->_size];
		for (unsigned int i = 0; i < this->_size; i++)
			this->_elements[i] = src._elements[i];
	}
}

template<typename T>
Array<T>::~Array(void)
{
	if (this->_elements)
		delete[] this->_elements;
}

template<typename T>
Array<T>	&Array<T>::operator=(const Array<T> &rhs)
{
	if (this == &rhs)
		return (*this);
	if (this->_elements)
		delete[] this->_elements;
	this->_size = rhs._size;
	this->_elements = NULL;
	if (this->_size > 0)
	{
		this->_elements = new T[this->_size];
		for (unsigned int i = 0; i < this->_size; i++)
			this->elements[i] = rhs._elements[i];
	}
	return (*this);
}

template<typename T>
T &Array<T>::operator[](unsigned int index)
{
	if (index >= this->_size)
		throw OutOfBoundsException();
	return (this->_elements[index]);
}

template<typename T>
const T &Array<T>::operator[](unsigned int index) const
{
	if (index >= this->_size)
		throw OutOfBoundsException();
	return (this->_elements[index]);
}

template<typename T>
unsigned int Array<T>::size(void) const
{
	return (this->_size);
}

#endif
