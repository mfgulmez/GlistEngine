/*
 * gGUIPanel.h
 *
 *  Created on: Aug 20, 2021
 *      Author: noyan
 */

#ifndef UI_GGUIPANEL_H_
#define UI_GGUIPANEL_H_

#include "gGUIContainer.h"


class gGUIPanel: public gGUIContainer {
public:
	gGUIPanel();
	virtual ~gGUIPanel();

	void update();
	void draw();

private:
};

#endif /* UI_GGUIPANEL_H_ */
