#include "stdafx.h"  //________________________________________ EjericicioTableVariables.cpp
#include "EjericicioTableVariables.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	EjericicioTableVariables app;
	return app.BeginDialog(IDI_EjericicioTableVariables, hInstance);
}

void EjericicioTableVariables::Window_Open(Win::Event& e)
{
	wstring texto;
	texto = Sys::Convert::ToString(MostrarArea(100, 2.4));
	this->MessageBox(texto, L"Area", MB_OK);
}
double EjericicioTableVariables::MostrarArea(double ancho, double alto)
{
	return ancho*alto;
}

