#include "conversion.h"
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;

[STAThread]


void main()
{

    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    reducedBits::conversion form;
    Application::Run(% form);

}