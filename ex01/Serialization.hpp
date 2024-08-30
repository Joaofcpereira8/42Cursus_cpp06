/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 18:18:58 by jofilipe          #+#    #+#             */
/*   Updated: 2024/08/28 18:18:59 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

# include "Data.h"
# include <stdint.h>
# include <iostream>

class Serialization {
	private:
		Serialization();
		Serialization(const Serialization &idemS);
		Serialization &operator=(const Serialization &copyS);
		~Serialization();
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif //SERIALIZATION_HPP