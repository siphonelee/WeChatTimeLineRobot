/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class FullBizChat, BizChatUser, QyBaseResponse, NSString, BaseResponse;

@interface InitiateBizChatResp : WXPBGeneratedMessage {
}
@property(retain, nonatomic) NSString* qychatId;
@property(retain, nonatomic) NSString* qychatType;
@property(retain, nonatomic) BizChatUser* singleChat;
@property(retain, nonatomic) FullBizChat* groupChat;
@property(assign, nonatomic) unsigned bizchatType;
@property(retain, nonatomic) NSString* brandUserName;
@property(retain, nonatomic) QyBaseResponse* qyBaseResp;
@property(retain, nonatomic) BaseResponse* baseResponse;
+(void)initialize;
@end

