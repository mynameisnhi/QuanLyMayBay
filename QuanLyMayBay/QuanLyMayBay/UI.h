

#include"define.h"
#include"graphics.h"
#pragma comment(lib,"graphics.lib")
#ifndef UI_H
#define UI_H
class UI {
protected:
	int left, top;
	int right, bottom;
	int backgroundColor, onSelectedBackgroundColor,currenBackground;
public:
	UI(int left, int top,int right,int bottom,int backgroundColor,int onSelectedBackgroundColor) {
		this->left = left;
		this->top = top;
		this->right = right;
		this->bottom = bottom;
		this->backgroundColor = backgroundColor;
		this->onSelectedBackgroundColor = onSelectedBackgroundColor;
		this->currenBackground = backgroundColor;

	}
	UI() {
		left = 0; top = 0;
		right = 0; bottom = 0;
		backgroundColor = -1;
		onSelectedBackgroundColor = -1; 
		currenBackground = -1;
	}
	void virtual drawUI() {
		setbkcolor(currenBackground);
		setfillstyle(SOLID_FILL, currenBackground);
		bar(left , top , right , bottom );

	}

	bool virtual isPointed(int xMouse,int yMouse) {
		if (xMouse <= right  && xMouse >= left  && yMouse <= bottom   && yMouse >=  top ) {
			return true;
		}
		return false;
	}
};
#endif 