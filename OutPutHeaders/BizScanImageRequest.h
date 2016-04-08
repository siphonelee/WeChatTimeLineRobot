/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class SKBuiltinBuffer_t, BaseRequest;

@interface BizScanImageRequest : WXPBGeneratedMessage {
}
@property(assign, nonatomic) unsigned sessionId;
@property(assign, nonatomic) unsigned opcode;
@property(assign, nonatomic) unsigned imageType;
@property(assign, nonatomic) unsigned endFlag;
@property(assign, nonatomic) unsigned offset;
@property(assign, nonatomic) unsigned totalLength;
@property(retain, nonatomic) SKBuiltinBuffer_t* imageBuffer;
@property(assign, nonatomic) unsigned clientScanId;
@property(retain, nonatomic) BaseRequest* baseRequest;
+(void)initialize;
@end

