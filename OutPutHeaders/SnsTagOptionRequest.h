/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface SnsTagOptionRequest : WXPBGeneratedMessage {
}
@property(retain, nonatomic) NSString* tagName;
@property(assign, nonatomic) unsigned long long tagId;
@property(assign, nonatomic) unsigned opCode;
@property(retain, nonatomic) BaseRequest* baseRequest;
+(void)initialize;
@end

