/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 18:46:41 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/27 01:55:24 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "";
	std::cout << "WrongAnimal constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& a)
{
	std::cout << "WrongAnimal copy constructor called." << std::endl;
	*this = a;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called."<< std::endl;
}

WrongAnimal&   WrongAnimal::operator=(const WrongAnimal& a)
{
	if (this != &a)	
		this->type = a.type;
	std::cout << "WrongAnimal assignement operator called." << std::endl;
	return (*this);
}

void	WrongAnimal::setType(std::string& t)
{
	this->type = t;
}

const std::string&	WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Undefined sound." << std::endl;
}
