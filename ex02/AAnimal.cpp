/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 18:40:50 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/27 02:04:55 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	type = "";
	std::cout << "Animal constructor called." << std::endl;
}

AAnimal::AAnimal(const AAnimal& a)
{
	std::cout << "Animal copy constructor called." << std::endl;
	*this = a;
}

AAnimal::~AAnimal()
{
	std::cout << "Animal destructor called."<< std::endl;
}

AAnimal&   AAnimal::operator=(const AAnimal& a)
{
	if (this != &a)
	{
		this->type = a.type;
	}
	std::cout << "Animal copy assignement operator" << std::endl;
	return (*this);
}

void	AAnimal::setType(std::string& t)
{
	this->type = t;
}

const std::string&	AAnimal::getType(void) const
{
	return (this->type);
}
