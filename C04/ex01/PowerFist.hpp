#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
private:
	
public:
	PowerFist();
	~PowerFist();
	PowerFist(PowerFist const & cp);
	PowerFist & operator=(PowerFist const & op);

	void attack() const;
};

#endif 
