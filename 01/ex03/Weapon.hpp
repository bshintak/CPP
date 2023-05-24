# ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {
	public:
		Weapon(std::string typeWeapon);
    	~Weapon();
    	std::string const &getType() const;
		void	setType(std::string const &typeWeapon); 
  	private:
		std::string	_type;
};

#endif