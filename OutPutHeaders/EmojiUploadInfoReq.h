/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class SKBuiltinBuffer_t, NSString;

@interface EmojiUploadInfoReq : WXPBGeneratedMessage {
}
@property(retain, nonatomic) NSString* msgSource;
@property(retain, nonatomic) NSString* clientMsgId;
@property(retain, nonatomic) NSString* report;
@property(retain, nonatomic) NSString* externXml;
@property(retain, nonatomic) NSString* toUserName;
@property(assign, nonatomic) int type;
@property(retain, nonatomic) SKBuiltinBuffer_t* emojiBuffer;
@property(assign, nonatomic) int totalLen;
@property(assign, nonatomic) int startPos;
@property(retain, nonatomic) NSString* md5;
+(void)initialize;
@end

