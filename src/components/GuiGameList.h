#ifndef _GUIGAMELIST_H_
#define _GUIGAMELIST_H_

#include "../GuiComponent.h"
#include "GuiList.h"
#include <string>
#include "../SystemData.h"
#include "../GameData.h"

class GuiGameList : GuiComponent
{
public:
	GuiGameList(SystemData* system);
	void updateList();

	void onRender();
private:
	SystemData* mSystem;
	GuiList* mList;
};

#endif
