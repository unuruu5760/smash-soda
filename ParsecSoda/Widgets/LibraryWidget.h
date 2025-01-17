#pragma once

#include "../ImGui/imgui.h"
#include "../Hosting.h"
#include "../globals/AppIcons.h"
#include "../globals/AppStyle.h"
#include "IconButton.h"
#include "TitleTooltipWidget.h"
#include "ConfirmPopupWidget.h"
#include "PopupWidgetEdit.h"

class LibraryWidget
{
public:

	LibraryWidget(Hosting& hosting);
	bool render();
	bool renderGameList();
	bool renderForm(int index);

private:
	
	// Dependency injection
	Hosting& _hosting;
	GameDataList& _gameList;

	bool showEditForm = false;

	int activeIndex = -1;
	int popupRemoveIndex = -1;
	int popupEditIndex = -1;

	char _filterText[256] = "";

	char _editName[256] = "";
	char _editPath[256] = "";
	char _editID[256] = "1wdoHfhhZH5lPuZCwGBete0HIAj";
	char _editParam[256] = "";
	char _editThumb[256] = "";
	bool _editKiosk = false;
	bool _editHotseat = false;
	int _editSeats = 1;

};