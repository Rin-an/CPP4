/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 17:12:16 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/25 23:16:56 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H
# include "Animal.hpp"

class Dog : public Animal
{
	public :
		Dog(void);
		Dog(const Dog&);
		Dog&	operator=(const Dog&);
		~Dog(void);
		virtual	void	makeSound(void) const;
};

#endif
