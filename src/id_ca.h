#ifndef __ID_CA__
#define __ID_CA__

//===========================================================================

extern  class GameMap *map;
extern	class LevelInfo *levelInfo;

//===========================================================================

void CA_CacheMap (const class FString &mapname);

void CA_CacheScreen (const char* chunk);

#endif
