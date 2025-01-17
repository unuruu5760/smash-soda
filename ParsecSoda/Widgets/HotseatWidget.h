#pragma once
#pragma once

#include "../ImGui/imgui.h"
#include "../Hosting.h"
#include "../globals/AppIcons.h"
#include "../globals/AppStyle.h"
#include "IconButton.h"
#include "TitleTooltipWidget.h"
#include "ConfirmPopupWidget.h"
#include "PopupWidgetEdit.h"
#include "../ImGui/imform.h"

class HotseatWidget {
public:

	HotseatWidget(Hosting& hosting);
	bool render();

	void renderOverview();
	void renderSettings();

private:

	// Hotseat
	int32_t _hotseatSeats;
	int32_t _hotseatTime;
	bool _hotseatAFK;
	int32_t _hotseatAFKTime;
	bool _hotseatPause;

	// Dependency injection
	Hosting& _hosting;

};