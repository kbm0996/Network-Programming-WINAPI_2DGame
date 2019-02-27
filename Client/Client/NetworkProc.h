#ifndef __NETWORK_PROC__
#define __NETWORK_PROC__

int NetworkInit(WCHAR* szIP);
bool NetworkProc(WPARAM wParam, LPARAM lParam);
void Network_Close();

bool SendPacket(st_NETWORK_PACKET_HEADER *pHeader, char *pPacket);
void mpMoveStart(st_NETWORK_PACKET_HEADER *pHeader, st_PACKET_CS_MOVE_START *pPacket, BYTE iDir, WORD iX, WORD iY);
void mpMoveStop(st_NETWORK_PACKET_HEADER *pHeader, st_PACKET_CS_MOVE_STOP *pPacket, BYTE iDir, WORD iX, WORD iY);
void mpAttack1(st_NETWORK_PACKET_HEADER *pHeader, st_PACKET_CS_ATTACK1 *pPacket, BYTE iDir, WORD iX, WORD iY);
void mpAttack2(st_NETWORK_PACKET_HEADER *pHeader, st_PACKET_CS_ATTACK2 *pPacket, BYTE iDir, WORD iX, WORD iY);
void mpAttack3(st_NETWORK_PACKET_HEADER *pHeader, st_PACKET_CS_ATTACK3 *pPacket, BYTE iDir, WORD iX, WORD iY);

bool RecvEvent();
bool PacketProc(BYTE byType, char* Packet);
void netPacketProc_CreateMyCharacter(st_PACKET_SC_CREATE_MY_CHARACTER* Packet);
void netPacketProc_CreateOtherCharacter(st_PACKET_SC_CREATE_OTHER_CHARACTER* Packet);
void netPacketProc_DeleteCharacter(st_PACKET_SC_DELETE_CHARACTER* Packet);
void netPacketProc_MoveStart(st_PACKET_SC_MOVE_START* Packet);
void netPacketProc_MoveStop(st_PACKET_SC_MOVE_STOP* Packet);
void netPacketProc_Attack1(st_PACKET_SC_ATTACK1* Packet);
void netPacketProc_Attack2(st_PACKET_SC_ATTACK2* Packet);
void netPacketProc_Attack3(st_PACKET_SC_ATTACK3* Packet);
void netPacketProc_Damage(st_PACKET_SC_DAMAGE* Packet);

bool SendEvent();

#endif