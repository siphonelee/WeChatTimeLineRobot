/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class NSString;

@interface LoginQRCodeNotify : WXPBGeneratedMessage {
}
@property(assign, nonatomic) unsigned expiredTime;
@property(retain, nonatomic) NSString* nickName;
@property(assign, nonatomic) unsigned pushLoginUrlexpiredTime;
@property(retain, nonatomic) NSString* headImgUrl;
@property(retain, nonatomic) NSString* pwd;
@property(retain, nonatomic) NSString* userName;
@property(assign, nonatomic) unsigned status;
@property(retain, nonatomic) NSString* uuid;
+(void)initialize;
@end

