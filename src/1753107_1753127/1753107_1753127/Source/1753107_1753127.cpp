#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Runtime::InteropServices;
[STAThreadAttribute]

void Main(array<String^>^ args) {
	// check argument 
	if (args->Length == 2) {
		IntPtr ptrToNativeString = Marshal::StringToHGlobalAnsi(args[0]);
		char* a1 = static_cast<char*>(ptrToNativeString.ToPointer());
		ptrToNativeString = Marshal::StringToHGlobalAnsi(args[1]);
		char* a2 = static_cast<char*>(ptrToNativeString.ToPointer());
		// call function test by argument
		AutoTest(a1, a2);
		return ;
	}
	// Case don't use argument, use Winform UI
	QINT Q1,Q2,Qres;
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Calculator::MyForm2 form;
	//Calculator::MyForm1 form1;
	Application::Run(%form);
}