/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class NSString;

@interface EmojiUploadInfoResp : WXPBGeneratedMessage {
}
@property(assign, nonatomic) unsigned long long newMsgId;
@property(assign, nonatomic) unsigned msgId;
@property(retain, nonatomic) NSString* md5;
@property(assign, nonatomic) int totalLen;
@property(assign, nonatomic) int startPos;
@property(assign, nonatomic) int ret;
+(void)initialize;
@end
