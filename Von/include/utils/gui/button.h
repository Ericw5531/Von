#pragma once

#include <string>
#include <vector>

#include "physics/AABB.h"

#include "gfx/texture.h"

#include "sfx/music.h"

#include "utils/general.h"
#include "utils/vector2f.h"

class Button
{
	public:
		Button(
			Vector2f pos,
			GLuint w,
			GLuint h,
			std::string msg,
			bool clickable);
		~Button();

		void render() const;
		void handleEvents(AABB cursorCollisionBox);

		bool isClicked() { return m_click; }
	private:
		AABB m_collisionBox;

		Texture m_buttonTex;
		Texture m_messageTex;

		bool m_hover;
		bool m_click;

		bool m_clickable;

		Sfx m_menuHover;
		Sfx m_menuClick;
};