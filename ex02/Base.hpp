/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:48:20 by jofilipe          #+#    #+#             */
/*   Updated: 2024/08/29 18:48:21 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

# include <iostream>
# include <ctime>
# include <cstdlib>
# include <typeinfo>

class Base {
	public:
		virtual ~Base();

};

Base* generate(void);
void identify(Base* p);
void identify(Base& p);

#endif //BASE_HPP
