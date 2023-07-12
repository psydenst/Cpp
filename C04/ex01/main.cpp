/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:27:40 by psydenst          #+#    #+#             */
/*   Updated: 2023/07/11 22:37:23 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "cat.hpp"
#include "dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{

	Animal *Jungle[8];
	int i = 0;
	while (i < 8)
	{
		if (i < 4)
			Jungle[i] = new Dog;
		else
			Jungle[i] = new Cat;
		i++;
	}
	i = 0;
	while (i < 8)
	{
		Jungle[i]->makeSound();
		delete Jungle[i];
		i++;
	}

	Dog *Dog1 = new Dog; 
	Dog Dog2 = *Dog1;
	delete (Dog1);
	Dog2.printIdea();
	return (0);
}


