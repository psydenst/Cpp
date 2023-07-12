/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:21:00 by psydenst          #+#    #+#             */
/*   Updated: 2023/07/11 22:24:08 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "animal.hpp"
#include "brain.hpp"

class Cat : public Animal
{
		protected:
			std::string type;
			Brain *brainPtr;
		public:
			Cat(std::string name);
			Cat();
			~Cat();
			Cat	(Cat const &instance);
			Cat &operator=(Cat const &instance);
			virtual void makeSound() const;
			std::string getType()const;
			virtual void printIdea();
};

#endif
