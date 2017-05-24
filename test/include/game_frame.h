/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   GameFrame.h
 * Author: admin
 *
 * Created on 2017年5月24日, 下午7:23
 */

#ifndef GAMEFRAME_H
#define GAMEFRAME_H

#include <map>
#include <memory>
#include "epoll_svr.h"
#include "config_loader.h"
#include "game_player.h"
using namespace easynet;
//游戏框架

using PLAYER_MAP = std::map<uint64_t, GamePlayerPtr>;
using PLAYER_MAP_ITER = std::map<uint64_t, GamePlayerPtr>::iterator;
class GameFrame{
public:
    
    GameFrame();
    /*
        using On_Accept_Handler = std::function<void(uint64_t)>;
        using On_Socket_Handler = std::function<void(uint64_t, const void*, int32_t, int32_t)>;
        using On_Reconnect_Handler = std::function<void()>;    
     */
    //初始化服务器
    //port 端口号, max_connection 最大连接数, 当连接到来时的绑定函数, 
    //timeout 超时多少秒删除连接, window 接收发送窗口, 默认2048, nodelay 不延迟, 默认true
    bool init(uint16_t port, int32_t max_connection, On_Accept_Handler h1, On_Socket_Handler h2,
              int32_t timeout = 30,int32_t window = 2048,  bool nodelay = true);  
    
    //注册事件, 客户端消息到来时处理
    bool reg_event();
    //连接服务器
    bool connect_to();
    //发送消息
    bool send_msg();
    //定时器
    bool timer();
    
    //应该另外建一个类管理玩家
    GamePlayerPtr find_player(uint64_t id);
    void add_player(uint64_t id, GamePlayerPtr player);
private:
    
private:
    EPOLLSvrPtr epoll_svr_;    
    //所有玩家
    PLAYER_MAP  player_map_;
    
    
    
    
    
    
    
    
    
};


#endif /* GAMEFRAME_H */

