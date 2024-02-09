#include "Controller.h"
#include <iostream>

//------------------------------
Controller::Controller()
{
}
//------------------------------
Controller::~Controller()
{
}
//-------------------------------
void Controller::run()
{
	if(m_level.buildLevel(m_my_board))
		std::cout << "ok";
}