/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhrabro <vkhrabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 17:28:18 by vkhrabro          #+#    #+#             */
/*   Updated: 2024/05/06 22:15:20 by vkhrabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap{
	
	public:
		FragTrap();
		FragTrap(const std::string &name);
		FragTrap(const FragTrap& copy);
		virtual ~FragTrap();

		void highFivesGuys(void);
	FragTrap &operator=(const FragTrap &src);	
};

#endif