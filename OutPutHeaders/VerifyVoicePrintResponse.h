/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class VoicePieceCtx, BaseResponse;

@interface VerifyVoicePrintResponse : WXPBGeneratedMessage {
}
@property(assign, nonatomic) unsigned voiceTicket;
@property(assign, nonatomic) unsigned result;
@property(retain, nonatomic) VoicePieceCtx* nextPiece;
@property(retain, nonatomic) BaseResponse* baseResponse;
+(void)initialize;
@end
