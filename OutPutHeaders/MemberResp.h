/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class SKBuiltinString_t, NSString;

@interface MemberResp : WXPBGeneratedMessage {
}
@property(retain, nonatomic) NSString* country;
@property(retain, nonatomic) NSString* verifyInfo;
@property(assign, nonatomic) unsigned verifyFlag;
@property(assign, nonatomic) unsigned personalCard;
@property(retain, nonatomic) NSString* signature;
@property(retain, nonatomic) NSString* city;
@property(retain, nonatomic) NSString* province;
@property(assign, nonatomic) unsigned contactType;
@property(retain, nonatomic) SKBuiltinString_t* remarkQuanPin;
@property(retain, nonatomic) SKBuiltinString_t* remarkPyinitial;
@property(retain, nonatomic) SKBuiltinString_t* remark;
@property(assign, nonatomic) int sex;
@property(retain, nonatomic) SKBuiltinString_t* quanPin;
@property(retain, nonatomic) SKBuiltinString_t* pyinitial;
@property(retain, nonatomic) SKBuiltinString_t* nickName;
@property(assign, nonatomic) unsigned memberStatus;
@property(retain, nonatomic) SKBuiltinString_t* memberName;
+(void)initialize;
@end

