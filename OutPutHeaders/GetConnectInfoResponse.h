/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class SKBuiltinBuffer_t, NSMutableArray, NSString, BaseResponse;

@interface GetConnectInfoResponse : WXPBGeneratedMessage {
}
@property(retain, nonatomic) NSString* wifiName;
@property(assign, nonatomic) unsigned long long dataSize;
@property(assign, nonatomic) unsigned scene;
@property(assign, nonatomic) unsigned encryFlag;
@property(retain, nonatomic) NSString* pcacctName;
@property(retain, nonatomic) NSString* pcname;
@property(retain, nonatomic) NSString* resource;
@property(retain, nonatomic) NSMutableArray* addrList;
@property(assign, nonatomic) unsigned addrCount;
@property(assign, nonatomic) unsigned type;
@property(retain, nonatomic) NSString* ok;
@property(retain, nonatomic) NSString* hello;
@property(retain, nonatomic) SKBuiltinBuffer_t* key;
@property(retain, nonatomic) NSString* id;
@property(retain, nonatomic) BaseResponse* baseResponse;
+(void)initialize;
@end

