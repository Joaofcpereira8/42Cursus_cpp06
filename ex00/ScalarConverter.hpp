/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:41:11 by jofilipe          #+#    #+#             */
/*   Updated: 2024/08/27 15:41:13 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <cstdlib>
# include <iomanip>
# include <cstring>
# include <cctype>
# include <cmath>

class ScalarConverter {
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &idemScal);
		ScalarConverter& operator=(const ScalarConverter &copyScal);
		~ScalarConverter();
	public:
		static void convert(std::string parameter);
		static int verif(const std::string paramF, double numV, char* endV);
};


#endif //SCALARCONVERTER_HPP
