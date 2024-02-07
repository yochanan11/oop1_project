#pragma once
#include "StaticObj.h"

class Erasable : public StaticObj
{

public:
	Erasable();
	~Erasable();
	bool isDel() const;
	void eatObj(const bool);

private:
	bool m_obj_del;
};
