/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class NSMutableArray, BaseResponse;

@interface VoipRedirectResp : WXPBGeneratedMessage {
}
@property(retain, nonatomic) NSMutableArray* tcpAddrList;
@property(assign, nonatomic) int tcpAddrCount;
@property(assign, nonatomic) int roomMemberId;
@property(assign, nonatomic) long long roomKey;
@property(retain, nonatomic) NSMutableArray* punchAddrList;
@property(assign, nonatomic) int punchAddrCount;
@property(retain, nonatomic) NSMutableArray* relayAddrList;
@property(assign, nonatomic) int relayAddrCount;
@property(assign, nonatomic) int roomId;
@property(retain, nonatomic) BaseResponse* baseResponse;
+(void)initialize;
@end

