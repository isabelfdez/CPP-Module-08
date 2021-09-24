/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:17:01 by isfernan          #+#    #+#             */
/*   Updated: 2021/09/24 12:00:24 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
	Span sp = Span(100);
	sp.addNumber(5);
	sp.addNumber(-5);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "Shortest span = " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span  = " << sp.longestSpan() << std::endl;
	
	Span s(1);
	s.addNumber(4);
	try
	{
		std::cout << s.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << s.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		s.addNumber(9);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::list<int>	my_list;
	my_list.push_back(36);
	my_list.push_back(36);
	my_list.push_back(36);
	my_list.push_back(36);
	my_list.push_back(36);
	my_list.push_back(36);
	my_list.push_back(36);
	sp.addNumber(my_list.begin(), my_list.end());
	std::list<int>::const_iterator	it = sp._lst.begin();
	while (it != sp._lst.end())
	{
		std::cout << *it << ' ';
		it++;
	}
	std::cout << '\n';
	std::cout << "Shortest span = " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span  = " << sp.longestSpan() << std::endl;
}