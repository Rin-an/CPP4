/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 18:40:50 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/27 01:24:38 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	type = "";
	std::cout << "Animal constructor called." << std::endl;
}

Animal::Animal(const Animal& a)
{
	std::cout << "Animal copy constructor called." << std::endl;
	*this = a;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called."<< std::endl;
}

Animal&   Animal::operator=(const Animal& a)
{
	if (this != &a)
	{
		this->type = a.type;
	}
	std::cout << "Animal copy assignement operator" << std::endl;
	return (*this);
}

void	Animal::setType(std::string& t)
{
	this->type = t;
}

const std::string&	Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Undefined sound." << std::endl;
}
