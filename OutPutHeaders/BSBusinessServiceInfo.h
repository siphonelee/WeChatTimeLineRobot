/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, NSString;

@interface BSBusinessServiceInfo : XXUnknownSuperclass {
	NSString* _title;
	NSString* _serviceUrl;
	NSDictionary* _itemFieldDict;
}
@property(retain, nonatomic) NSDictionary* itemFieldDict;
@property(retain, nonatomic) NSString* serviceUrl;
@property(retain, nonatomic) NSString* title;
+(id)fromServerObj:(id)serverObj;
-(void).cxx_destruct;
-(void)dealloc;
@end

