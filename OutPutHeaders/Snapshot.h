/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class NSMutableArray, NSString, Express, Address;

@interface Snapshot : WXPBGeneratedMessage {
}
@property(retain, nonatomic) NSString* lockId;
@property(assign, nonatomic) unsigned receiptCount;
@property(retain, nonatomic) NSMutableArray* receipt;
@property(retain, nonatomic) Address* address;
@property(retain, nonatomic) Express* express;
@property(retain, nonatomic) NSMutableArray* productions;
@property(assign, nonatomic) unsigned productCount;
+(void)initialize;
@end

