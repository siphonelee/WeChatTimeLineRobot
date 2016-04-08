/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface SafeDeviceData : XXUnknownSuperclass {
	NSString* name;
	NSString* uuid;
	NSString* deviceType;
	unsigned createTime;
}
@property(assign, nonatomic) unsigned createTime;
@property(retain, nonatomic) NSString* deviceType;
@property(retain, nonatomic) NSString* uuid;
@property(retain, nonatomic) NSString* name;
+(BOOL)isSafeDeviceSwitchOpen;
+(id)GetSafeDeviceStatusString;
+(void)SetThisDeviceSafe:(BOOL)safe;
+(BOOL)isThisDeviceInTrustList;
+(id)getDeviceUuid;
+(void)SetSafeDeviceList:(id)list;
+(void)UpdateSafeDevice:(id)device withName:(id)name;
+(void)DelSafeDevice:(id)device;
-(void).cxx_destruct;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
@end
