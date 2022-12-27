/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 16:33:33 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/25 23:16:53 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H
# include "Animal.hpp"

class Cat : public Animal
{
	public :
		Cat(void);
		Cat(const Cat&);
		Cat&	operator=(const Cat&);
		~Cat(void);
		virtual	void	makeSound(void) const;
};

#endif
