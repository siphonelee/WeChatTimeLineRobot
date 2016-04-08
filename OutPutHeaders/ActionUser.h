/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface ActionUser : XXUnknownSuperclass <NSCoding> {
	NSString* _name;
	NSString* _desc;
	NSString* _username;
	NSString* _nickname;
	NSString* _strBeforeFollow;
	NSString* _strAfterFollow;
}
@property(retain, nonatomic) NSString* strAfterFollow;
@property(retain, nonatomic) NSString* strBeforeFollow;
@property(retain, nonatomic) NSString* nickname;
@property(retain, nonatomic) NSString* username;
@property(retain, nonatomic) NSString* desc;
@property(retain, nonatomic) NSString* name;
-(void).cxx_destruct;
-(id)toXml;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)init;
@end

