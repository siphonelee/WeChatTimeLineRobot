/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface PstnSyncRequest : WXPBGeneratedMessage {
}
@property(assign, nonatomic) unsigned long long callSeq;
@property(assign, nonatomic) unsigned calledStatusSyncKey;
@property(assign, nonatomic) unsigned long long timestamp;
@property(assign, nonatomic) unsigned long long roomKey;
@property(assign, nonatomic) unsigned roomId;
@property(retain, nonatomic) NSString* fromUsername;
@property(retain, nonatomic) BaseRequest* baseRequest;
+(void)initialize;
@end

