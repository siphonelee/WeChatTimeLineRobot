/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class NSData, NSString, BaseRequest;

@interface GetAvailableCardRequest : WXPBGeneratedMessage {
}
@property(assign, nonatomic) unsigned onlyInvoice;
@property(retain, nonatomic) NSData* buff;
@property(retain, nonatomic) NSString* cardType;
@property(retain, nonatomic) NSString* cardTpId;
@property(retain, nonatomic) NSString* nonceStr;
@property(assign, nonatomic) unsigned timeStamp;
@property(retain, nonatomic) NSString* cardSign;
@property(retain, nonatomic) NSString* signType;
@property(assign, nonatomic) unsigned shopId;
@property(retain, nonatomic) NSString* appId;
@property(retain, nonatomic) BaseRequest* baseRequest;
+(void)initialize;
@end

