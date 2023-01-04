/*               Reg para configurar Balança         */
/*		Gupo Multi 04/01/2023               */
/*	Frederico Almeida - Analista de Suporte Jr */

#include<iostream>
#include <windows.h> 
using namespace std;

int main(){
	
	ShowWindow(GetConsoleWindow(), SW_HIDE); // esconder prompt de comando

	system("REG ADD HKEY_CURRENT_USER\\Software\\Microsoft\\Windows\\CurrentVersion\\Run /v Teste /d \"C:\\Users\\Public\\Balanca.bat");
	system("copy \\\\mltbr.local\\NETLOGON\\Balanca\\Balanca.bat C:\\Users\\Public");
	system("copy \\\\mltbr.local\\NETLOGON\\Balanca\\Balanca.db C:\\Users\\Public");
	system("copy \\\\mltbr.local\\NETLOGON\Balanca\\LerPortaSerialRest.exe C:\\Users\\Public");
	
	return 0;
}
