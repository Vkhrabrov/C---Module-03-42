/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhrabro <vkhrabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 20:19:54 by vkhrabro          #+#    #+#             */
/*   Updated: 2024/05/15 20:55:57 by vkhrabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	std::cout << "The default ClapTrap constructor has been called" << std::endl;
	_name = "John Doe";
	_robotType = "ClapTrap";
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;
}

ClapTrap::ClapTrap(const std::string &name) : _name(name), _robotType("ClapTrap"), _hit_points(10), _energy_points(10), _attack_damage(0){
	std::cout << "The name ClapTrap constructor has been called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy){
	*this = copy;
}

ClapTrap::~ClapTrap(){
	std::cout << "The destructor for ClapTrap has been called" << std::endl;
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

std::string ClapTrap::getType(){
	return this->_robotType;
}

// void ClapTrap::setName(std::string name){
// 	_name = name;
// }

void ClapTrap::attack(const std::string& target){
	if (this->getEnergyPoints() > 0){
		_energy_points -= 1;
		std::cout << this->getType() << " " << this->getName() << " attacks " << target << ", causing " << this->getDamage() << " points of damage!" << std::endl;
		std::cout << this->getType() << " " << this->getName() << " has " << this->getEnergyPoints() << " points of energy left" << std::endl;
	}
	else
		std::cout << "Can not attack! No energy left"  << std::endl;
}	

void ClapTrap::takeDamage(unsigned int amount){
	if (this->getHitPoints() > 0)
		{
			std::cout << this->getType() << " " << this->getName() <<  " received " << amount << " points of damage" << std::endl;
			_hit_points -= amount;
			std::cout << this->getType() << " " << this->getName() <<  " has " << this->getHitPoints() << " points of health left" << std::endl;
		}
	else
		std::cout << "The target is long dead";
}
void ClapTrap::beRepaired(unsigned int amount){
	if (this->getHitPoints() > 0 && this->getEnergyPoints() > 0)
		{
			std::cout << this->getType() << " received " << amount << " points of healing" << std::endl;
			_hit_points += amount;
			_energy_points -= 1;
			std::cout << this->getType() << " has " << this->getHitPoints() << " points of health left" << std::endl;
		}
	else if (this->getHitPoints() < 0)
		std::cout << "No healing is possible, " << this->getType() << " is dead" << std::endl;
	else 
		std::cout << "There's not enough energy to perform the repair process" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src){
	std::cout << "Assignation operator called" << std::endl;
	this->_name = src._name;
	this->_hit_points = src._hit_points;
	this->_energy_points = src._energy_points;
	this->_attack_damage = src._attack_damage;
	return *this;
}