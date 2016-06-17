#pragma once

#include "utils/general.h"
#include <iostream>

class Bgm
{
	public:
		Bgm();
		Bgm(const char* filename);
		~Bgm();

		void loadMusicFile(const char* filename);
		
		void playMusic();
		void repeatMusic();
		void pauseMusic();
		void resumeMusic();
		void stopMusic();

		Mix_Music* m_Music;
};

class Sfx
{
	public:
		Sfx();
		Sfx(const char* filename);
		~Sfx();

		void loadSoundFile(const char* filename);

		void playSound();

		Mix_Chunk* m_Chunk;
};