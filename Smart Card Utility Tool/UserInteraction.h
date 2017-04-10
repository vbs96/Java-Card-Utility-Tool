#pragma once
#include"Instruction.h"

class InteractionErr
{
	public:
		virtual void Dispatch() const = 0;
};

class CUserInteraction
{

public:
	static void SendAPDU(Instruction& instrName, const unsigned char* appletAID);

};
