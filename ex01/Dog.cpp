/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 18:45:33 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/27 01:25:30 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	b = new Brain();
	std::cout << "Dog constructor called." << std::endl;
}

Dog::Dog(const Dog& a)
{
	*this = a;
	std::cout << "Dog copy constructor called." << std::endl;
}

Dog::~Dog()
{
	delete b;
	std::cout << "Dog destructor called."<< std::endl;
}

Dog&   Dog::operator=(const Dog& a)
{
	if (this != &a)
	{
		this->type = a.type;
		this->b = new Brain(*a.b);
	}
	std::cout << "Dog copy assignement operator called." << std::endl;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof woof." << std::endl;
}

Brain*	Dog::getBrain(void) const
{
	return (this->b);
}
