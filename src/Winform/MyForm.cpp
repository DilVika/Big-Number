#include "MyForm.h"

//#include"QINT.h"
//#include"QFloat.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Runtime::InteropServices;
[STAThreadAttribute]

void Main(array<String^>^ args) {
	if (args->Length == 2) {
		IntPtr ptrToNativeString = Marshal::StringToHGlobalAnsi(args[0]);
		char* a1 = static_cast<char*>(ptrToNativeString.ToPointer());
		ptrToNativeString = Marshal::StringToHGlobalAnsi(args[1]);
		char* a2 = static_cast<char*>(ptrToNativeString.ToPointer());
		AutoTest(a1, a2);
		return ;
	}
	//std::string unmanaged = msclr::interop::marshal_as<std::string>(managed);
	//gcnew String(orig.c_str()) string to string^
	QINT Q1,Q2,Qres;
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Calculator::MyForm form;
	Application::Run(%form);
}