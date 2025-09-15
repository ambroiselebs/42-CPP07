/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 15:40:22 by aberenge          #+#    #+#             */
/*   Updated: 2025/09/15 15:50:17 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

// Function template for testing
template<typename T>
void	print(T const &x)
{
	std::cout << x << " ";
}

// Function for incrementing values
template<typename T>
void	increment(T &x)
{
	x++;
}

// Function for testing with const arrays
void	printInt(int const &x)
{
	std::cout << "[" << x << "] ";
}

// Function for testing with non-const arrays
void	doubleValue(int &x)
{
	x *= 2;
}

int	main(void)
{
	std::cout << "=== Testing with int array ===" << std::endl;
	int	intArray[] = {1, 2, 3, 4, 5};
	size_t	intSize = sizeof(intArray) / sizeof(intArray[0]);

	std::cout << "Original array: ";
	::iter(intArray, intSize, print<int>);
	std::cout << std::endl;

	std::cout << "After increment: ";
	::iter(intArray, intSize, increment<int>);
	::iter(intArray, intSize, print<int>);
	std::cout << std::endl;

	std::cout << "After doubling: ";
	::iter(intArray, intSize, doubleValue);
	::iter(intArray, intSize, printInt);
	std::cout << std::endl;

	std::cout << "\n=== Testing with string array ===" << std::endl;
	std::string	strArray[] = {"Hello", "World", "42", "School"};
	size_t	strSize = sizeof(strArray) / sizeof(strArray[0]);

	std::cout << "String array: ";
	::iter(strArray, strSize, print<std::string>);
	std::cout << std::endl;

	std::cout << "\n=== Testing with const array ===" << std::endl;
	const int	constArray[] = {10, 20, 30, 40, 50};
	size_t	constSize = sizeof(constArray) / sizeof(constArray[0]);

	std::cout << "Const array: ";
	::iter(constArray, constSize, print<const int>);
	std::cout << std::endl;

	return (0);
}
