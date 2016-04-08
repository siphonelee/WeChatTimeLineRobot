/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "PBCoding.h"

@class NSString;

@interface WCSnsPayFreePasswdInfo : XXUnknownSuperclass <PBCoding> {
	BOOL isOpenSnsPay;
	BOOL canOpenSnsPay;
	BOOL isWhiteUser;
	BOOL hasShowAlert;
	NSString* userName;
	NSString* openSnsPayTitle;
	NSString* openSnsPayWording;
	NSString* setSnsPayTitle;
	NSString* setSnsPayWording;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* setSnsPayWording;
@property(retain, nonatomic) NSString* setSnsPayTitle;
@property(assign, nonatomic) BOOL hasShowAlert;
@property(retain, nonatomic) NSString* openSnsPayWording;
@property(retain, nonatomic) NSString* openSnsPayTitle;
@property(assign, nonatomic) BOOL isWhiteUser;
@property(assign, nonatomic) BOOL canOpenSnsPay;
@property(assign, nonatomic) BOOL isOpenSnsPay;
@property(retain, nonatomic) NSString* userName;
+(void)initialize;
-(void).cxx_destruct;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(id)copyWithZone:(NSZone*)zone;
-(id)init;
-(const map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >*)getValueTagIndexMap;
-(id)getValueTypeTable;
@end

