/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:03:11 by psydenst          #+#    #+#             */
/*   Updated: 2023/07/11 22:47:46 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brain.hpp"
#include <stdlib.h>

std::string Brain::_rawIdeas[100] = {

"A dog is the only thing on earth that loves you more than you love yourself.",
"Animals are such agreeable friends—they ask no questions; they pass no criticisms.",
"If having a soul means being able to feel love and loyalty and gratitude, then animals are better off than a lot of humans.",
"There are two means of refuge from the miseries of life: music and cats.",
"I used to love dogs until I discovered cats.",
"One cat just leads to another.",
"The smallest feline is a masterpiece.",
"A cat will be your friend, but never your slave.",
"As every cat owner knows, nobody owns a cat.",
"If cats could talk, they wouldn’t.",
"let's play!",
"let's sleep!",
"feed me, human",
"What if I was human?",
"You cannot look at a sleeping cat and feel tense.",
"Time spent with cats is never wasted.",
"There is no psychiatrist in the world like a puppy licking your face.",
"You know, a dog can snap you out of any kind of bad mood that you’re in faster than you can think of.",
"Pets understand humans better than humans do.",
"Pets reflect you like mirrors. When you are happy, you can see your dog smiling, and when you are sad, your cat cries.",
"Those who love dogs, know something about God.",
"You do not own a dog. You have a dog. And the dog has you.",
"In ancient times cats were worshipped as gods; they have not forgotten this.",
"Dogs and angels are not very far apart.",
"Dogs motivate humans to play, be affectionate, seek adventure, and be loyal.",
"If your dog doesn’t like someone, you probably shouldn’t either.",
"Dog is God spelled backward.",
"Home is where the dog runs to greet you.",
"Cats are inquisitive but hate to admit it.",
"Cats have it all – admiration, an endless sleep, and company only when they want it.",
"A dog desires affection more than its dinner. Well—almost.",
"A dog is the only thing on earth that loves you more than you love yourself.",
"Animals are such agreeable friends—they ask no questions; they pass no criticisms.",
"If having a soul means being able to feel love and loyalty and gratitude, then animals are better off than a lot of humans.",
"There are two means of refuge from the miseries of life: music and cats.",
"I used to love dogs until I discovered cats.",
"One cat just leads to another.",
"The smallest feline is a masterpiece.",
"A cat will be your friend, but never your slave.",
"As every cat owner knows, nobody owns a cat.",
"If cats could talk, they wouldn’t.",
"let's play!",
"let's sleep!",
"feed me, human",
"What if I was human?",
"You cannot look at a sleeping cat and feel tense.",
"Time spent with cats is never wasted.",
"There is no psychiatrist in the world like a puppy licking your face.",
"You know, a dog can snap you out of any kind of bad mood that you’re in faster than you can think of.",
"Pets understand humans better than humans do.",
"Pets reflect you like mirrors. When you are happy, you can see your dog smiling, and when you are sad, your cat cries.",
"Those who love dogs, know something about God.",
"You do not own a dog. You have a dog. And the dog has you.",
"In ancient times cats were worshipped as gods; they have not forgotten this.",
"Dogs and angels are not very far apart.",
"Dogs motivate humans to play, be affectionate, seek adventure, and be loyal.",
"If your dog doesn’t like someone, you probably shouldn’t either.",
"Dog is God spelled backward.",
"Home is where the dog runs to greet you.",
"Cats are inquisitive but hate to admit it.",
"Cats have it all – admiration, an endless sleep, and company only when they want it.",
"A dog desires affection more than its dinner. Well—almost.",
"A dog is the only thing on earth that loves you more than you love yourself.",
"Animals are such agreeable friends—they ask no questions; they pass no criticisms.",
"If having a soul means being able to feel love and loyalty and gratitude, then animals are better off than a lot of humans.",
"There are two means of refuge from the miseries of life: music and cats.",
"I used to love dogs until I discovered cats.",
"One cat just leads to another.",
"The smallest feline is a masterpiece.",
"A cat will be your friend, but never your slave.",
"As every cat owner knows, nobody owns a cat.",
"If cats could talk, they wouldn’t.",
"let's play!",
"let's sleep!",
"feed me, human",
"What if I was human?",
"You cannot look at a sleeping cat and feel tense.",
"Time spent with cats is never wasted.",
"There is no psychiatrist in the world like a puppy licking your face.",
"You know, a dog can snap you out of any kind of bad mood that you’re in faster than you can think of.",
"Pets understand humans better than humans do.",
"Pets reflect you like mirrors. When you are happy, you can see your dog smiling, and when you are sad, your cat cries.",
"Those who love dogs, know something about God.",
"You do not own a dog. You have a dog. And the dog has you.",
"In ancient times cats were worshipped as gods; they have not forgotten this.",
"Dogs and angels are not very far apart.",
"Dogs motivate humans to play, be affectionate, seek adventure, and be loyal.",
"If your dog doesn’t like someone, you probably shouldn’t either.",
"Dog is God spelled backward.",
"Home is where the dog runs to greet you.",
"Cats are inquisitive but hate to admit it.",
"Cats have it all – admiration, an endless sleep, and company only when they want it.",
"A dog desires affection more than its dinner. Well—almost.",
"A dog is the only thing on earth that loves you more than you love yourself.",
"Animals are such agreeable friends—they ask no questions; they pass no criticisms.",
"If having a soul means being able to feel love and loyalty and gratitude, then animals are better off than a lot of humans.",
"There are two means of refuge from the miseries of life: music and cats.",
"I used to love dogs until I discovered cats.",
"One cat just leads to another.",
"The smallest feline is a masterpiece."
};

Brain::Brain()
{
	int i;

	std::srand(static_cast<unsigned int>(std::time(NULL)));
	i = 0;
	while(i < 100)
	{
		this->ideas[i] = Brain::_rawIdeas[rand() % 100]; 
		i++;
	}
	std::cout << "Brain borned" << std::endl;
}

Brain::Brain(Brain const &instance)
{	
	*this = instance;
	std::cout << "Brain copy constructor called" << std::endl;
	return ;
}

void Brain::operator=(Brain const &right_hand_side)
{
	int i;

	i = 0;
	while (i < 100)
	{
		this->ideas[i] = right_hand_side.ideas[i];
		i++;
	}
}

Brain::~Brain()
{
	std::cout << "Brain was destroyed" << std::endl;
}

