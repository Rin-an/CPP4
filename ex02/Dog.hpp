/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 17:12:16 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/27 02:00:36 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
	Brain	*b;
	public :
		Dog(void);
		Dog(const Dog&);
		Dog&	operator=(const Dog&);
		virtual ~Dog(void);
		virtual	void	makeSound(void) const;
		Brain*	getBrain(void) const;
};

#endif
