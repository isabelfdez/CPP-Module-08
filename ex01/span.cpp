/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:32:20 by isfernan          #+#    #+#             */
/*   Updated: 2021/09/21 17:10:06 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span() : _max(0) { }

Span::Span(unsigned int n) : _max(n) { }

Span::Span(Span const &obj) { *this = obj; }

Span &Span::operator=(Span const &obj)
{
	this->_lst = obj._lst;
	this->_max = obj._max;
	return (*this);
}

Span::~Span() { _lst.clear(); }



void Span::addNumber(int n)
{
	if (this->_lst.size() >= this->_max)
		throw FullListException();
	else
		this->_lst.push_back(n);
}

void Span::addNumber(std::list<int>::iterator begin, std::list<int>::iterator end)
{
	if (this->_lst.size() + std::distance(begin, end) > _max)
		throw NotEnoughSpaceException();
	this->_lst.insert(this->_lst.end(), begin, end);
}

int Span::shortestSpan()
{
	std::list<int> aux;
	std::list<int>::const_iterator it1 = this->_lst.begin();
	std::list<int>::const_iterator it2 = this->_lst.begin();
	it2++;
	if (this->_lst.size() < 2)
		throw CannotSpanException();
	while (it1 != this->_lst.end() && it2 != this->_lst.end())
	{
		aux.push_back(abs(*it2 - *it1));
		it1++;
		it2++;
	}
	aux.sort();	
	return (aux.front());
}

int Span::longestSpan()
{
	std::list<int> aux = this->_lst;

	aux.sort();
	if (this->_lst.size() < 2)
		throw CannotSpanException();
	return (aux.back() - aux.front());
}



const char *Span::FullListException::what() const throw()
{
	return ("The list is full");   
}

const char *Span::CannotSpanException::what() const throw()
{
	return ("Too few elements to span");   
}

const char *Span::NotEnoughSpaceException::what() const throw()
{
	return ("Not enough space in the list to perfom this operation");   
}

