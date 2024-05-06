/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhrabro <vkhrabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 17:28:07 by vkhrabro          #+#    #+#             */
/*   Updated: 2024/05/06 22:27:35 by vkhrabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "The default FragTrap constructor is has been called" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
	std::cout << "The name constructor for FragTrap has been called" << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	this->_robotType = "FragTrap";
}

FragTrap::FragTrap(const FragTrap &copy){
	*this = copy;
}

FragTrap::~FragTrap(){
	std::cout << "The destructor for FragTrap has been called" << std::endl;
}

void FragTrap::highFivesGuys(void){
	std::cout << "Gimme highfive guys!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &src){
	std::cout << "Assignation operator called" << std::endl;
	this->_name = src._name;
	this->_hit_points = src._hit_points;
	this->_energy_points = src._energy_points;
	this->_attack_damage = src._attack_damage;
	return *this;
}