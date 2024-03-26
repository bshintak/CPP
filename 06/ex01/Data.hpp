#pragma once

#include <iostream>

struct Data {
	public:
		Data();
		~Data();
		Data(Data const& src);

		void			setValue(const int nbr);
		int				getValue(void) const;
		void			setString(const std::string string);
		std::string		getString(void) const;
	private:
		int value;
		std::string str;
};

