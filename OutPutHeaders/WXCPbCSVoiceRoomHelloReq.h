/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class NSMutableArray, NSData, NSString;

@interface WXCPbCSVoiceRoomHelloReq : WXPBGeneratedMessage {
}
@property(retain, nonatomic) NSMutableArray* relayReport;
@property(retain, nonatomic) NSData* memoryCost;
@property(assign, nonatomic) int callData;
@property(assign, nonatomic) int memberId;
@property(assign, nonatomic) long long roomkey;
@property(assign, nonatomic) int roomid;
@property(retain, nonatomic) NSString* groupId;
+(void)initialize;
@end

