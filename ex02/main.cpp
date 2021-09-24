/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 17:16:51 by isfernan          #+#    #+#             */
/*   Updated: 2021/09/24 12:25:32 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <list>

int main()
{
	std::cout << "MUTANT STACK" << '\n';
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << ' ';
		++it;
	}
	std::cout << '\n';
	

	std::cout << "LIST" << '\n';
	std::list<int> mylst;
	mylst.push_back(5);
	mylst.push_back(17);
	std::cout << mylst.back() << std::endl;
	mylst.pop_back();
	std::cout << mylst.size() << std::endl;
	mylst.push_back(3);
	mylst.push_back(5);
	mylst.push_back(737);
	//[...]
	mylst.push_back(0);
	std::list<int>::iterator iter = mylst.begin();
	std::list<int>::iterator itend = mylst.end();
	++iter;
	--iter;
	while (iter != itend)
	{
		std::cout << *iter << ' ';
		++iter;
	}
	std::list<int> s2(mylst);
	std::cout << '\n';
	

	std::cout << "OTHER MUTANT STACK" << '\n';
	MutantStack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	MutantStack<int>::criterator it2 = s.crbegin();
	MutantStack<int>::criterator ite2 = s.crend();
	MutantStack<int>::iterator it3 = s.begin();
	MutantStack<int>::iterator ite3 = s.end();
	while (it2 != ite2)
	{
		std::cout << *it2 << ' ';
		++it2;
	}
	std::cout << '\n';
	while (it3 != ite3)
	{
		std::cout << *it3 << ' ';
		++it3;
	}
	std::cout << '\n';
	return 0;
}