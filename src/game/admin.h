#ifndef ADMIN_H
#define ADMIN_H

#include <stdint.h>

void Admin(char plr);
void CacheCrewFile();
int32_t EndOfTurnSave(char *inData, int dataLen);  // Create ENDTURN.TMP
void FileAccess(char mode);
int FutureCheck(char plr, char type);
void save_game(char *name);

#endif // ADMIN_H
