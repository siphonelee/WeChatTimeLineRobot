/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface SetPcLoginUserInfoRequest : WXPBGeneratedMessage {
}
@property(retain, nonatomic) NSString* ticket;
@property(assign, nonatomic) unsigned shopId;
@property(retain, nonatomic) NSString* appId;
@property(retain, nonatomic) BaseRequest* baseRequest;
+(void)initialize;
@end

