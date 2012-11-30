/*
 * Copyright 2010, BurnItNow Team. All rights reserved.
 * Distributed under the terms of the MIT License.
 */
#ifndef _BURN_WINDOW_H_
#define _BURN_WINDOW_H_


#include <Window.h>


class BMenuBar;
class BMessage;
class BRect;
class BView;


class BurnWindow : public BWindow {
public:
								BurnWindow(BRect frame, const char* title);

	virtual	void				MessageReceived(BMessage* message);

private:
			BMenuBar*			_CreateMenuBar();
			BView*				_CreateToolBar();
			BView*				_CreateTabView();
			BView*				_CreateDiskUsageView();

			void				_BurnDisc();
			void				_BuildImage();
			void				_OpenWebSite();
			void				_OpenHelp();
			void				_UpdateSpeedSlider(BMessage* message);
};


#endif	// _BURN_WINDOW_H_
