/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"
#import "NSCoding.h"

@class UIColor, NSString;

@interface SystemMsgTextWrap : XXUnknownSuperclass <NSCoding> {
	NSString* text;
	CGPoint origin;
	unsigned long width;
	UIColor* color;
	unsigned long font;
}
@property(assign, nonatomic) unsigned long font;
@property(retain, nonatomic) UIColor* color;
@property(assign, nonatomic) unsigned long width;
@property(assign, nonatomic) CGPoint origin;
@property(retain, nonatomic) NSString* text;
-(void).cxx_destruct;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
@end

