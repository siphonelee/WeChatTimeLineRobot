/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class NSMutableArray, NSString, BaseRequest;

@interface SnsTagMemberOptionRequest : WXPBGeneratedMessage {
}
@property(assign, nonatomic) unsigned scene;
@property(retain, nonatomic) NSMutableArray* list;
@property(assign, nonatomic) unsigned count;
@property(retain, nonatomic) NSString* tagName;
@property(assign, nonatomic) unsigned long long tagId;
@property(assign, nonatomic) unsigned opCode;
@property(retain, nonatomic) BaseRequest* baseRequest;
+(void)initialize;
@end

