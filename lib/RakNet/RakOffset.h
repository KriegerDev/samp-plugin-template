#ifndef _RAKNET_OFFSETS_H_
#define _RAKNET_OFFSETS_H_
#ifdef _WIN32
#define RAKNET_START_OFFSET							1
#define RAKNET_SEND_OFFSET							7
#define RAKNET_RECEIVE_OFFSET						10
#define RAKNET_SET_ALLOWED_PLAYERS_OFFSET			13
#define RAKNET_GET_LAST_PING_OFFSET					19
#define RAKNET_REGISTER_RPC_OFFSET					29
#define RAKNET_UNREGISTER_RPC_OFFSET				31
#define RAKNET_RPC_OFFSET							32
#define RAKNET_GET_LOCAL_IP_OFFSET					52
#define RAKNET_GET_INDEX_FROM_PLAYERID_OFFSET		57
#define RAKNET_GET_PLAYERID_FROM_INDEX_OFFSET		58
#define RAKNET_ADD_BAN_OFFSET						60
#define RAKNET_REMOVE_BAN_OFFSET					61
#define RAKNET_CLEAR_BAN_OFFSET						62
#define RAKNET_SET_TIMEOUT_OFFSET					65
#else
#define RAKNET_START_OFFSET							2
#define RAKNET_SEND_OFFSET							9
#define RAKNET_RECEIVE_OFFSET						11
#define RAKNET_SET_ALLOWED_PLAYERS_OFFSET			14
#define RAKNET_GET_LAST_PING_OFFSET					20
#define RAKNET_REGISTER_RPC_OFFSET					30
#define RAKNET_UNREGISTER_RPC_OFFSET				32
#define RAKNET_RPC_OFFSET							35
#define RAKNET_GET_LOCAL_IP_OFFSET					53
#define RAKNET_GET_INDEX_FROM_PLAYERID_OFFSET		58
#define RAKNET_GET_PLAYERID_FROM_INDEX_OFFSET		59
#define RAKNET_ADD_BAN_OFFSET						61
#define RAKNET_REMOVE_BAN_OFFSET					62
#define RAKNET_CLEAR_BAN_OFFSET						63
#define RAKNET_SET_TIMEOUT_OFFSET					65
#endif
#endif