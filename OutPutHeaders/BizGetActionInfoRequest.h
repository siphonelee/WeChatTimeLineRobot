/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class NSMutableArray, NSString, BaseRequest;

@interface BizGetActionInfoRequest : WXPBGeneratedMessage {
}
@property(assign, nonatomic) double latitude;
@property(assign, nonatomic) double longitude;
@property(retain, nonatomic) NSString* qrUrl;
@property(assign, nonatomic) unsigned scene;
@property(retain, nonatomic) NSMutableArray* actionKeyList;
@property(retain, nonatomic) NSString* productId;
@property(retain, nonatomic) BaseRequest* baseRequest;
+(void)initialize;
@end

