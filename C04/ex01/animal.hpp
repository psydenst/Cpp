/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:21:23 by psydenst          #+#    #+#             */
/*   Updated: 2023/07/11 22:36:08 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include "brain.hpp"

class Animal
{
		protected:
			std::string type;
			Brain *brainPtr;
		public:
			Animal(std::string name);
			Animal();
			virtual ~Animal();
			Animal	(Animal const &instance);
			Animal &operator=(Animal const &instance);
			virtual void makeSound() const;
			std::string getType()const;
			virtual void 	printIdea();
};

#endif
