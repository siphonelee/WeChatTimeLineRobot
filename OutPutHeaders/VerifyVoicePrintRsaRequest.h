/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class SKBuiltinBuffer_t, NSString, VoicePieceCtx, BaseRequest;

@interface VerifyVoicePrintRsaRequest : WXPBGeneratedMessage {
}
@property(retain, nonatomic) SKBuiltinBuffer_t* randomEncryKey;
@property(retain, nonatomic) NSString* verifyTicket;
@property(assign, nonatomic) unsigned resId;
@property(assign, nonatomic) unsigned voiceTicket;
@property(retain, nonatomic) VoicePieceCtx* piece;
@property(retain, nonatomic) BaseRequest* baseRequest;
+(void)initialize;
@end

