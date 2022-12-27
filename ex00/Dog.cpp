/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 18:45:33 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/27 01:56:14 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog constructor called." << std::endl;
}

Dog::Dog(const Dog& a)
{
	std::cout << "Dog copy constructor called." << std::endl;
	*this = a;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called."<< std::endl;
}

Dog&   Dog::operator=(const Dog& a)
{
	if (this != &a)	
		this->type = a.type;
	std::cout << "Dog assignement operator called." << std::endl;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof woof." << std::endl;
}
