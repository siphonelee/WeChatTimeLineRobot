/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class OpenAppInfo, NSString, BaseResponse;

@interface GetAppInfoResponse : WXPBGeneratedMessage {
}
@property(retain, nonatomic) NSString* appType;
@property(retain, nonatomic) NSString* devInfo;
@property(assign, nonatomic) unsigned noUse;
@property(retain, nonatomic) OpenAppInfo* appInfo;
@property(retain, nonatomic) BaseResponse* baseResponse;
+(void)initialize;
@end

