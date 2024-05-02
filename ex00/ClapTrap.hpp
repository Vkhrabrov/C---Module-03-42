/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhrabro <vkhrabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 20:19:51 by vkhrabro          #+#    #+#             */
/*   Updated: 2024/05/02 19:05:25 by vkhrabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap{

	private:
		std::string _name;
		int _hit_points;
		int _energy_points;
		int _attack_damage;

	public:
		ClapTrap();
		ClapTrap(const std::string &name);
		~ClapTrap();
		ClapTrap(const ClapTrap& copy);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		int getDamage();
		int getHitPoints();
		int getEnergyPoints();
		std::string getName();
		void setName(std::string name);

		// ClapTrap operator+(const ClapTrap& src);
		// ClapTrap operator-(const ClapTrap& src);
		// bool operator==(const ClapTrap& src) const;
};

#endif