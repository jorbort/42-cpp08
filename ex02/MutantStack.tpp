
/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{
}

template <typename T>
MutantStack<T>::MutantStack( const MutantStack & src ) : std::stack<T>(src)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

template <typename T>
MutantStack<T>::~MutantStack()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

template <typename T>
MutantStack<T>& MutantStack<T>::operator=( MutantStack const & rhs )
{

	return std::stack<T>::operator=(rhs);
}

/*
** --------------------------------- METHODS ----------------------------------
*/
template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return this->c.end();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
