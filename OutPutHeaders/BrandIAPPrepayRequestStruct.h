/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface BrandIAPPrepayRequestStruct : XXUnknownSuperclass {
	NSString* _appId;
	NSString* _nonceStr;
	NSString* _timestamp;
	NSString* _package;
	NSString* _paySign;
	NSString* _signType;
	NSString* _stepInURL;
	NSString* _extKey;
}
@property(retain, nonatomic) NSString* extKey;
@property(retain, nonatomic) NSString* stepInURL;
@property(retain, nonatomic) NSString* signType;
@property(retain, nonatomic) NSString* paySign;
@property(retain, nonatomic) NSString* package;
@property(retain, nonatomic) NSString* timestamp;
@property(retain, nonatomic) NSString* nonceStr;
@property(retain, nonatomic) NSString* appId;
-(void).cxx_destruct;
-(void)dealloc;
@end

