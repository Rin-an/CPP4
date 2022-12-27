/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 16:33:33 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/27 02:00:28 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
	Brain	*b;
	public :
		Cat(void);
		Cat(const Cat&);
		Cat&	operator=(const Cat&);
		virtual ~Cat(void);
		virtual	void	makeSound(void) const;
		Brain*	getBrain(void) const;
};

#endif
