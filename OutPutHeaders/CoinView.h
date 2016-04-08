/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"

@protocol CoinViewDelegate;

@interface CoinView : XXUnknownSuperclass {
	int vx;
	int vy;
	BOOL bStop;
	id<CoinViewDelegate> m_delegate;
}
@property(assign, nonatomic) __weak id<CoinViewDelegate> m_delegate;
-(void).cxx_destruct;
-(void)onAnimationComplete:(id)complete finished:(id)finished context:(void*)context;
-(void)tick;
-(void)stop;
-(void)start;
-(id)initWithEmoji:(id)emoji withSize:(CGSize)size;
@end

