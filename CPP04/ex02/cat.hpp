/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:21:00 by psydenst          #+#    #+#             */
/*   Updated: 2023/07/11 17:52:14 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "animal.hpp"

class Cat : public Animal
{
		protected:
			std::string type;
	
		public:
			Cat(std::string name);
			Cat();
			~Cat();
			Cat	(Cat const &instance);
			Cat &operator=(Cat const &instance);
			virtual void makeSound() const;
			std::string getType()const;
};

#endif
