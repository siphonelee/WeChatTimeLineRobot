/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface SnsUserPageRequest : WXPBGeneratedMessage {
}
@property(assign, nonatomic) unsigned lastRequestTime;
@property(assign, nonatomic) unsigned long long minFilterId;
@property(assign, nonatomic) unsigned source;
@property(assign, nonatomic) unsigned long long maxId;
@property(retain, nonatomic) NSString* username;
@property(retain, nonatomic) NSString* firstPageMd5;
@property(retain, nonatomic) BaseRequest* baseRequest;
+(void)initialize;
@end

