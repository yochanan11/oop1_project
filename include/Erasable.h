#pragma once
#include "StaticObj.h"

class Erasable : public StaticObj
{

public:
	Erasable(sf::Texture&);
	~Erasable();
	bool isDel() const;
	void eatObj(const bool);

private:
	bool m_obj_del;
};
