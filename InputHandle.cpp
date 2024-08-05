#include "InputHandle.h"


void InputHandle::AssignMoveLeftCommand2PressKeyA()
{
	ICommand* command = new MoveRightCommand();
	this->pressKeyA_ = command;
}

void InputHandle::AssignMoveRightCommand2PressKeyD()
{
	ICommand* command = new MoveRightCommand();
	this->pressKeyD_ = command;
}

ICommand* InputHandle::HandleInput()
{
	if (Novice::CheckHitKey(DIK_D)) {
		return pressKeyD_;
	}
	return nullptr;
}
