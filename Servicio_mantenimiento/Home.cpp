#include "Home.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    Serviciomantenimiento::Home form;
    Application::Run(% form);

}
