/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhrabro <vkhrabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 17:28:07 by vkhrabro          #+#    #+#             */
/*   Updated: 2024/05/05 17:40:15 by vkhrabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "FragTrap constructor is has been called" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
	std::cout << "The constructor for FragTrap has been called" << std::endl;
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
	_robotType = "FragTrap";
}

FragTrap::FragTrap(const FragTrap &copy){
	*this = copy;
}

FragTrap::~FragTrap(){
	std::cout << "The destructor for "<< this->getType() << " has been called" << std::endl;
}

void FragTrap::highFivesGuys(void){
	std::cout << "Gimme highfive guys!" << std::endl;
}