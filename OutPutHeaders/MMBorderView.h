/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"

@class UIColor, NSArray;

@interface MMBorderView : XXUnknownSuperclass {
	float _borderWidth;
	UIColor* _borderColor;
	NSArray* _borderPattern;
	unsigned _borders;
}
@property(assign, nonatomic) unsigned borders;
@property(retain, nonatomic) NSArray* borderPattern;
@property(retain, nonatomic) UIColor* borderColor;
@property(assign, nonatomic) float borderWidth;
-(void).cxx_destruct;
-(void)drawRect:(CGRect)rect;
-(void)layoutSubviews;
-(void)setDefaultValues;
-(id)initWithFrame:(CGRect)frame;
-(id)init;
@end

