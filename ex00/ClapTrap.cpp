/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhrabro <vkhrabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 20:19:54 by vkhrabro          #+#    #+#             */
/*   Updated: 2024/05/02 19:05:27 by vkhrabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	std::cout << "The constructor has been called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0){
	std::cout << "The constructor has been called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy){
	*this = copy;
}

ClapTrap::~ClapTrap(){
	std::cout << "The destructor has been called" << std::endl;
}

int ClapTrap::getDamage(){
	return this->_attack_damage;
}

int ClapTrap::getHitPoints(){
	return this->_hit_points;
}

int ClapTrap::getEnergyPoints(){
	return this->_energy_points;
}

std::string ClapTrap::getName(){
	return this->_name;
}

void ClapTrap::setName(std::string name){
	_name = name;
}

void ClapTrap::attack(const std::string& target){
	if (this->getEnergyPoints() > 0){
		_energy_points -= 1;
		std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << this->getDamage() << " points of damage!" << std::endl;
		std::cout << "ClapTrap " << this->getName() << " has " << this->getEnergyPoints() << " points of energy left" << std::endl;
	}
	else
		std::cout << "Can not attack! No energy left"  << std::endl;
}	

void ClapTrap::takeDamage(unsigned int amount){
	if (this->getHitPoints() > 0)
		{
			std::cout << "The target received " << amount << "points of damage";
			_hit_points -= amount;
		}
	else
		std::cout << "The target is long dead";
}
void ClapTrap::beRepaired(unsigned int amount){
	if (this->getHitPoints() > 0 && this->getEnergyPoints() > 0)
		{
			std::cout << "ClapTrap received " << amount << " points of healing" << std::endl;
			_hit_points += amount;
			_energy_points -= 1;
			std::cout << "ClapTrap has " << this->getHitPoints() << " points of health left" << std::endl;
		}
	else if (this->getHitPoints() < 0)
		std::cout << "No healing is possible, ClapTrap is dead" << std::endl;
	else 
		std::cout << "There's not enough energy to perfor the operation" << std::endl;
}