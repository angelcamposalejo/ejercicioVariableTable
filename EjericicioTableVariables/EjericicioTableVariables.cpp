#include "stdafx.h"  //________________________________________ EjericicioTableVariables.cpp
#include "EjericicioTableVariables.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	EjericicioTableVariables app;
	return app.BeginDialog(IDI_EjericicioTableVariables, hInstance);
}

void EjericicioTableVariables::Window_Open(Win::Event& e)
{
	double philMoney = 0.0;
	double tessMoney = 0.0;
	philMoney = Profit(10, 55.50);
	tessMoney = Profit(2, 150.50);
	wstring text;
	Sys::Format(text, L"%g,%g", philMoney, tessMoney);
	this->MessageBox(text, L"Program", MB_OK);
}
double EjericicioTableVariables::Profit(int ticketCount, double ticketCost)
{
	if (ticketCount < 5)
	{
		return ticketCount*ticketCost;
	}
	return ticketCount*ticketCost+1000.0;
}

