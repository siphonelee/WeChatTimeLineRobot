/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class BaseResponse, NSString;

@interface SearchGuideResponse : WXPBGeneratedMessage {
}
@property(retain, nonatomic) NSString* searchId;
@property(assign, nonatomic) unsigned timevalSec;
@property(retain, nonatomic) NSString* json;
@property(retain, nonatomic) BaseResponse* baseResponse;
+(void)initialize;
@end

