/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:48:30 by psydenst          #+#    #+#             */
/*   Updated: 2023/04/25 16:24:23 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contacts.hpp"

Contacts::Contacts()
{
	return ;
}

Contacts::~Contacts()
{
	return ;
}

std::string Contacts::getFirstName() const
{
	return (this->first_name);
}

std::string Contacts::getLastName() const
{
	return (this->last_name);
}

std::string Contacts::getNickName() const
{
	return (this->nick_name);
}

std::string Contacts::getPhoneNumber() const
{
	return (this->number);
}

std::string Contacts::getSecret() const
{
	return (this->secret);
}

void Contacts::setFirstName(std::string name)
{
	this->first_name = name;
	return;
}

void Contacts::setLastName(std::string name)
{
	this->last_name = name;
	return;
}

void Contacts::setNickName(std::string name)
{
	this->nick_name = name;
	return;
}

void Contacts::setPhoneNumber(std::string number)
{
	this->number = number;
	return;
}

void Contacts::setSecret(std::string secret)
{
	this->secret = secret;
	return;
}

int Contacts::isEmpty(void)
{
	if (this->getFirstName() != "" &&
	this->getLastName() != "" &&	
	this->getNickName () != "" && 
	this->getPhoneNumber() != "" &&
	this->getSecret() != "")
		return (0);
	else
		return (1);
}