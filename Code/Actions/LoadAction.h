#pragma once
#include "Action.h"
class LoadAction :public Action
{
private:
	string FileName;
	GfxInfo FigGfxInfo;
public:
	LoadAction(ApplicationManager* pApp);
	virtual void ReadActionParameters();
	virtual void Execute();
};

