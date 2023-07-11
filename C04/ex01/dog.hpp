/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:21:46 by psydenst          #+#    #+#             */
/*   Updated: 2023/07/11 17:52:27 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "animal.hpp"

class Dog : public Animal
{
		protected:
			std::string type;
	
		public:
			Dog(std::string name);
			Dog();
			~Dog();
			Dog	(Dog const &instance);
			Dog &operator=(Dog const &instance);
			virtual void makeSound() const;
			std::string getType()const;
};

#endif
