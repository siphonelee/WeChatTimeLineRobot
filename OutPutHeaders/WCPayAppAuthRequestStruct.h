/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface WCPayAppAuthRequestStruct : XXUnknownSuperclass {
	NSString* appId;
	NSString* partnerId;
	NSString* prepayId;
	NSString* nonceStr;
	NSString* timeStamp;
	NSString* package;
	NSString* sign;
	NSString* signType;
	NSString* scene;
}
@property(retain, nonatomic) NSString* scene;
@property(retain, nonatomic) NSString* signType;
@property(retain, nonatomic) NSString* sign;
@property(retain, nonatomic) NSString* package;
@property(retain, nonatomic) NSString* timeStamp;
@property(retain, nonatomic) NSString* nonceStr;
@property(retain, nonatomic) NSString* prepayId;
@property(retain, nonatomic) NSString* partnerId;
@property(retain, nonatomic) NSString* appId;
-(void).cxx_destruct;
-(void)dealloc;
@end

