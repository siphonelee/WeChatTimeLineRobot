/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class NSString;

@interface WXCPbQcwxtalkHead : WXPBGeneratedMessage {
}
@property(assign, nonatomic) unsigned uuid;
@property(assign, nonatomic) unsigned routeId;
@property(assign, nonatomic) int debugCode;
@property(assign, nonatomic) int ret;
@property(assign, nonatomic) unsigned seqNo;
@property(assign, nonatomic) int cmd;
@property(retain, nonatomic) NSString* userName;
+(void)initialize;
-(id)recvShortDesc;
-(id)sendShortDesc;
-(id)description;
@end

