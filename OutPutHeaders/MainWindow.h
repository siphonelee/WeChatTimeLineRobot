/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface MainWindow : XXUnknownSuperclass {
	float windowOffset;
	float mainWindowX;
	float mainWindowY;
	float mainWindowWidth;
	float mainWindowHeight;
	CGRect mainWindowFrame;
}
@property(assign, nonatomic) float mainWindowHeight;
@property(assign, nonatomic) float mainWindowWidth;
@property(assign, nonatomic) float mainWindowY;
@property(assign, nonatomic) float mainWindowX;
@property(assign, nonatomic) CGRect mainWindowFrame;
@property(assign, nonatomic) float windowOffset;
-(void)setX:(float)x;
-(void)setFrame:(CGRect)frame;
-(id)initWithFrame:(CGRect)frame;
@end

