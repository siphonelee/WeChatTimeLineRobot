/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class SKBuiltinString_t, NSString;

@interface MicroMsgRequestNew : WXPBGeneratedMessage {
}
@property(assign, nonatomic) unsigned ctrlBit;
@property(retain, nonatomic) NSString* msgSource;
@property(assign, nonatomic) unsigned clientMsgId;
@property(assign, nonatomic) unsigned createTime;
@property(assign, nonatomic) unsigned type;
@property(retain, nonatomic) NSString* content;
@property(retain, nonatomic) SKBuiltinString_t* toUserName;
+(void)initialize;
@end

