/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 17:16:42 by isfernan          #+#    #+#             */
/*   Updated: 2021/09/24 12:21:11 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iterator>
# include <stack>
# include <iostream>

template <class T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() : std::stack<T>() { };
		MutantStack(MutantStack<T> & obj) : std::stack<T>(obj) { };
		~MutantStack() { };
		
		MutantStack & operator=(MutantStack & obj) { this->c = obj.c; return (*this); };
		
		typedef typename std::stack<T>::container_type::iterator iterator;
        iterator	begin() { return (this->c.begin()); };
        iterator	end() { return (this->c.end()); };

        typedef typename std::stack<T>::container_type::reverse_iterator riterator;
        riterator	rbegin() { return (this->c.rbegin()); };
		riterator	rend() { return (this->c.rend()); };

		typedef typename std::stack<T>::container_type::const_iterator citerator;
        citerator	cbegin() { return (this->c.begin()); };
		citerator	cend() { return (this->c.end()); };

		typedef typename std::stack<T>::container_type::const_reverse_iterator criterator;
        criterator	crbegin() { return (this->c.rbegin()); };
		criterator	crend() { return (this->c.rend()); };
};

#endif