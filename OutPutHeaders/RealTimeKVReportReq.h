/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface RealTimeKVReportReq : WXPBGeneratedMessage {
}
@property(retain, nonatomic) NSString* value;
@property(assign, nonatomic) unsigned logId;
@property(retain, nonatomic) NSString* languageVer;
@property(retain, nonatomic) NSString* osVersion;
@property(retain, nonatomic) NSString* osName;
@property(retain, nonatomic) NSString* deviceBrand;
@property(retain, nonatomic) NSString* deviceModel;
@property(retain, nonatomic) BaseRequest* baseRequest;
+(void)initialize;
@end

