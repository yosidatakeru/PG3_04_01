#include "InputHandler.h"
#include"Novice.h"
ICommand* InputHandler::HandleInput()
{
	if (Novice::CheckHitKey(DIK_D))
	{
		return pressKeyD_;
	}

	if (Novice::CheckHitKey(DIK_A))
	{
		return pressKeyA_;
	}

	if (Novice::CheckHitKey(DIK_W))
	{
		return pressKeyW_;
	}

	if (Novice::CheckHitKey(DIK_S))
	{
		return pressKeyS_;
	}
	return nullptr;
}


void InputHandler::AssigMoveLeftCommand2PressKeyA()
{
	ICommand* command = new LeftCommand();
	pressKeyA_ = command;
}

void InputHandler::AssigMoveRightCommand2PressKeyD()
{
	ICommand* command = new RightCommand();
	pressKeyD_ = command;
}

void InputHandler::AssigMoveUPCommand2PressKeyW()
{
	ICommand* command = new UPCommand();
	pressKeyW_ = command;
}

void InputHandler::AssigMoveDownCommand2PressKeyS()
{
	ICommand* command = new DownCommand();
	pressKeyS_ = command;
}
