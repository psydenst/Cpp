/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:27:40 by psydenst          #+#    #+#             */
/*   Updated: 2023/07/14 20:15:44 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "cat.hpp"
#include "dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{

	Animal *Jungle[100];
	int i = 0;
	while (i < 100)
	{
		if (i < 60)
			Jungle[i] = new Cat;
		else
			Jungle[i] = new Dog;
		i++;
	}
	i = 0;
	while (i < 100)
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


