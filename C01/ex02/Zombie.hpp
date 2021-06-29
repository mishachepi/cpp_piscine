#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string name;
		std::string type;

	public:
		Zombie(std::string name = "Job", std::string type = "man");
		~Zombie();
		void	announce();
};

#endif