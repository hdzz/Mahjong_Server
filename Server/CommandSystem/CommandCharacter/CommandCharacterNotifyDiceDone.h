﻿#ifndef _COMMAND_CHARACTER_NOTIFY_DICE_DONE_H_
#define _COMMAND_CHARACTER_NOTIFY_DICE_DONE_H_

#include "txCommand.h"

// 向玩家发送开始游戏(进入倒数)的消息
class CommandCharacterNotifyDiceDone : public txCommand
{
public:
	COMMAND_SERVER_CONSTRUCT(CommandCharacterNotifyDiceDone)
	{}
	COMMAND_DECLARE_FUNCTION;
public:
};

#endif