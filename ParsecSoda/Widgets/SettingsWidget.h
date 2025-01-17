#pragma once

#include "../imgui/imgui.h"
#include "../Hosting.h"
#include "../MetadataCache.h"
#include "../Helpers/Debouncer.h"
#include "../globals/AppIcons.h"
#include "../globals/AppFonts.h"
#include "../globals/AppColors.h"
#include "../globals/AppStyle.h"
#include "TitleTooltipWidget.h"
#include "TooltipWidget.h"
#include "IntRangeWidget.h"

class SettingsWidget
{
public:
	SettingsWidget(Hosting& hosting);
	bool render();
	void renderGeneral();
	void renderChatbot();
	void renderLog();

private:
	// Dependency injection
	Hosting& _hosting;
	uint32_t DEBOUNCER_TIME_MS = 2000;

	bool _basicVersion = false;
	bool _disableMicrophone = false;
	bool _disableGuideButton = false;
	bool _disableKeyboard = false;
	bool _latencyLimitEnabled = false;
	bool _leaderboardEnabled = false;
	bool _prependPingLimit = false;
	unsigned int _latencyLimitValue = 0;
	unsigned int _theme = 0;
	char _discord[HOST_NAME_LEN] = "";
	char _chatbot[HOST_NAME_LEN] = "";
	char _welcomeMessage[256] = "";

	char _prependRegion[128] = "";

	int32_t _muteTime;
	bool _autoMute;
	int32_t _autoMuteTime;
	bool _saveChat;
};