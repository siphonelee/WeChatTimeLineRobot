/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class SKBuiltinBuffer_t, NSString, BaseRequest;

@interface GetSuggestAliasRequest : WXPBGeneratedMessage {
}
@property(retain, nonatomic) NSString* clientSeqId;
@property(retain, nonatomic) NSString* language;
@property(assign, nonatomic) unsigned regMode;
@property(retain, nonatomic) NSString* verifyContent;
@property(retain, nonatomic) NSString* verifySignature;
@property(retain, nonatomic) NSString* inputAlias;
@property(retain, nonatomic) NSString* nickName;
@property(retain, nonatomic) NSString* regTicket;
@property(retain, nonatomic) NSString* regBindName;
@property(retain, nonatomic) SKBuiltinBuffer_t* randomEncryKey;
@property(retain, nonatomic) BaseRequest* baseRequest;
+(void)initialize;
@end

