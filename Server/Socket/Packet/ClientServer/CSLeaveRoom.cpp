﻿#include "PacketHeader.h"
#include "MySQLDataBase.h"
#include "NetServer.h"
#include "CommandHeader.h"
#include "NetClient.h"
#include "CharacterManager.h"
#include "Character.h"

void CSLeaveRoom::execute()
{
	NetClient* client = mNetServer->getClient(mClient);
	CommandCharacterLeaveRoom cmd(CMD_PARAM);
	mCommandSystem->pushCommand(&cmd, mCharacterManager->getCharacter(client->getCharGUID()));
}