/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class SKBuiltinBuffer_t, NSString, BaseRequest;

@interface ComposeSendRequest : WXPBGeneratedMessage {
}
@property(assign, nonatomic) unsigned realSize;
@property(retain, nonatomic) NSString* toUserList;
@property(retain, nonatomic) NSString* fromUser;
@property(retain, nonatomic) SKBuiltinBuffer_t* data;
@property(assign, nonatomic) unsigned dataLen;
@property(assign, nonatomic) unsigned startPos;
@property(assign, nonatomic) unsigned totalLen;
@property(retain, nonatomic) NSString* clientId;
@property(retain, nonatomic) BaseRequest* baseRequest;
+(void)initialize;
@end

