#include <wx/wx.h>

#include "mainframe.h"

class Wafflecopter : public wxApp {
public:
	virtual bool OnInit();
};

bool Wafflecopter::OnInit() {
	MainFrame* frame = new MainFrame();
	frame->Show(true);
	return true;
}

wxIMPLEMENT_APP(Wafflecopter);
