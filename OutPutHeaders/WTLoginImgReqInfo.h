/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class SKBuiltinBuffer_t, NSString;

@interface WTLoginImgReqInfo : WXPBGeneratedMessage {
}
@property(retain, nonatomic) SKBuiltinBuffer_t* ksid;
@property(retain, nonatomic) NSString* imgEncryptKey;
@property(retain, nonatomic) NSString* imgCode;
@property(retain, nonatomic) NSString* imgSid;
+(void)initialize;
@end

