/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhrabro <vkhrabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 19:58:21 by vkhrabro          #+#    #+#             */
/*   Updated: 2024/05/15 22:39:04 by vkhrabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap{

	private: 
		std::string _name;

	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &copy);
		virtual ~DiamondTrap();
		void attack(std::string object);
		void whoAmI();
		DiamondTrap &operator=(const DiamondTrap &src);	
};

#endif