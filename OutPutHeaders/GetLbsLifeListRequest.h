/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class SKBuiltinBuffer_t, NSString, LbsLocation, BaseRequest;

@interface GetLbsLifeListRequest : WXPBGeneratedMessage {
}
@property(assign, nonatomic) unsigned isAutoQuery;
@property(assign, nonatomic) unsigned entryTime;
@property(retain, nonatomic) NSString* keyword;
@property(retain, nonatomic) LbsLocation* loc;
@property(retain, nonatomic) SKBuiltinBuffer_t* buff;
@property(assign, nonatomic) unsigned scene;
@property(assign, nonatomic) unsigned opcode;
@property(retain, nonatomic) BaseRequest* baseRequest;
+(void)initialize;
@end

