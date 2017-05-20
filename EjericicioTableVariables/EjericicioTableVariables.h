#pragma once  //______________________________________ EjericicioTableVariables.h  
#include "Resource.h"
class EjericicioTableVariables: public Win::Dialog
{
public:
	EjericicioTableVariables()
	{
	}
	~EjericicioTableVariables()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	void InitializeGui()
	{
		this->Text = L"EjericicioTableVariables";
	}
	void Window_Open(Win::Event& e);
	double Profit(int ticketCount, double ticketCost);
	double MostrarArea(double ancho, double alto);
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.style = DS_CENTER | DS_MODALFRAME | WS_POPUP | WS_VISIBLE | WS_CAPTION | WS_SYSMENU;
	}
	bool EventHandler(Win::Event& e)
	{
		return false;
	}
};
