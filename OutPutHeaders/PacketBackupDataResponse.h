/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class NSString;

@interface PacketBackupDataResponse : WXPBGeneratedMessage {
}
@property(assign, nonatomic) int status;
@property(assign, nonatomic) int endOffset;
@property(assign, nonatomic) int startOffset;
@property(assign, nonatomic) int dataType;
@property(retain, nonatomic) NSString* dataId;
+(void)initialize;
@end

