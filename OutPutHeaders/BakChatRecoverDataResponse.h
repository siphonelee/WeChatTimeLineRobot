/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class SKBuiltinBuffer_t, NSString, BaseResponse;

@interface BakChatRecoverDataResponse : WXPBGeneratedMessage {
}
@property(retain, nonatomic) NSString* cdnurl;
@property(assign, nonatomic) unsigned encryVer;
@property(assign, nonatomic) unsigned aesKey;
@property(assign, nonatomic) unsigned totalLen;
@property(assign, nonatomic) unsigned cancelFlag;
@property(assign, nonatomic) unsigned endFlag;
@property(retain, nonatomic) SKBuiltinBuffer_t* data;
@property(assign, nonatomic) unsigned length;
@property(assign, nonatomic) unsigned offset;
@property(retain, nonatomic) NSString* clientMsgId;
@property(assign, nonatomic) unsigned bakChatSvrId;
@property(retain, nonatomic) NSString* bakChatClientId;
@property(retain, nonatomic) BaseResponse* baseResponse;
+(void)initialize;
@end

