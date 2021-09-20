/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 18:10:55 by isfernan          #+#    #+#             */
/*   Updated: 2021/09/20 20:20:00 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <iterator>
# include <stdexcept>
# include <list>
# include <vector>

template <typename T>
typename T::const_iterator	easyfind(T &cont, int n)
{
	typename T::const_iterator	it;

	if ((it = find(cont.begin(), cont.end(), n)) == cont.end())
		throw std::runtime_error("Element is not present in the container");
	return (it);
}

#endif