/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhrabro <vkhrabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 19:24:50 by vkhrabro          #+#    #+#             */
/*   Updated: 2024/05/08 21:15:00 by vkhrabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("John Doe") {
	std::cout << "The default ScavTrap constructor has been called" << std::endl;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	_guardGate = false;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
	std::cout << "The name constructor for ScavTrap has been called" << std::endl;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	_robotType = "ScavTrap";
}

ScavTrap::ScavTrap(const ScavTrap &copy){
	*this = copy;
}

ScavTrap::~ScavTrap(){
	std::cout << "The destructor for ScavTrap has been called" << std::endl;
}

void ScavTrap::GuardGate(){
	if (_guardGate == false){
		_guardGate = true;
		std::cout << this->getType() << " " << this->_name << " is now at the gates!" << std::endl;
	}
	else
		std::cout << this->getType() << " " << this->_name << " is already has his eyes on the gates!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src){
	std::cout << "Assignation operator called" << std::endl;
	this->_name = src._name;
	this->_hit_points = src._hit_points;
	this->_energy_points = src._energy_points;
	this->_attack_damage = src._attack_damage;
	return *this;
}