/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 18:58:00 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/27 01:26:12 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "WrongCat constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat& a)
{
	std::cout << "WrongCat copy constructor called." << std::endl;
	*this = a;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called."<< std::endl;
}

WrongCat&   WrongCat::operator=(const WrongCat& a)
{
	if (this != &a)
		this->type = a.type;
	std::cout << "WrongCat copy assignement operator called." << std::endl;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "meow...mEEEEooooOoooooW" << std::endl;
}
