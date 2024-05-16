/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhrabro <vkhrabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 19:58:24 by vkhrabro          #+#    #+#             */
/*   Updated: 2024/05/16 21:04:19 by vkhrabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

void DiamondTrap::attack(std::string object){
	FragTrap::attack(object);
}

DiamondTrap::DiamondTrap() : ClapTrap("John_Doe_clap_trap"){
	std::cout << "The default DiamondTrap constructor has been called" << std::endl;
	DiamondTrap::_name = "John_Doe";
	DiamondTrap::_hit_points = FragTrap::_hit_points;
	DiamondTrap::_energy_points = ScavTrap::_energy_points;
	DiamondTrap::_attack_damage = FragTrap::_attack_damage;
	DiamondTrap::_robotType = "DiamondTrap";
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_trap"){
	std::cout << "DiamondTrap Name Constructor called" << std::endl;
	DiamondTrap::_name = name;
	DiamondTrap::_hit_points = FragTrap::_hit_points;
	DiamondTrap::_energy_points = ScavTrap::_energy_points;
	DiamondTrap::_attack_damage = FragTrap::_attack_damage;
	DiamondTrap::_robotType = "DiamondTrap";
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy){
	*this = copy;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "The destructor for "<< this->getType() << " has been called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src){
	std::cout << "DiamondTrap Assignation operator called" << std::endl;
	this->_name = src._name;
	this->_hit_points = src._hit_points;
	this->_energy_points = src._energy_points;
	this->_attack_damage = src._attack_damage;
	return *this;
}

void DiamondTrap::whoAmI(){
	std::cout << "My name is " << _name << std::endl;
	std::cout << "My ClapTrap name is " << ClapTrap::_name << std::endl;
}