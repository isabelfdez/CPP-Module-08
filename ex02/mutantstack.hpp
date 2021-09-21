/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 17:16:42 by isfernan          #+#    #+#             */
/*   Updated: 2021/09/21 19:19:36 by isfernan         ###   ########.fr       */
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
		MutantStack();
		MutantStack(MutantStack & obj);
		~MutantStack();
		
		MutantStack & operator=(MutantStack & obj);
		
		typedef typename std::stack<T>::container_type::iterator iter;
        iter	begin();
        iter	end();

        typedef typename std::stack<T>::container_type::reverse_iterator riter;
        riter	rbegin();
		riter	rend();
};

#endif