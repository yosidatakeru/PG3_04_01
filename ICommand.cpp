#include "ICommand.h"
#include"Player.h"
ICommand::~ICommand()
{
}

void RightCommand::Exec(Player& player)
{
	player.MoveRight();
}

void LeftCommand::Exec(Player& player)
{
	player.MoveLeft();
}

void UPCommand::Exec(Player& player)
{
	player.MoveUP();
}

void DownCommand::Exec(Player& player)
{
	player.MoveDown();
}
