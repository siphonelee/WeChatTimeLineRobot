/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class BaseResponse, NSString;

@interface GetVideoInfoResponse : WXPBGeneratedMessage {
}
@property(retain, nonatomic) NSString* videoFileUrl;
@property(retain, nonatomic) NSString* videoCgiUrl;
@property(retain, nonatomic) NSString* ckey;
@property(retain, nonatomic) BaseResponse* baseResponse;
+(void)initialize;
@end

