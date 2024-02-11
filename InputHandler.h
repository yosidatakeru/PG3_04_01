#pragma once
#include"ICommand.h"
class InputHandler
{
public:
	ICommand* HandleInput();

	void AssigMoveLeftCommand2PressKeyA();
	void AssigMoveRightCommand2PressKeyD();
	void AssigMoveUPCommand2PressKeyW();
	void AssigMoveDownCommand2PressKeyS();

private:
	
	ICommand* pressKeyD_;
	ICommand* pressKeyA_;
	ICommand* pressKeyW_;
	ICommand* pressKeyS_;
};

