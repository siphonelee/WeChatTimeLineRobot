/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMTipsViewController.h"

@class CADisplayLink, NSString;

@interface CountDownTipViewController : MMTipsViewController {
	CADisplayLink* m_timer;
	unsigned long m_uiCurrentCount;
	id m_userData;
	NSString* m_nsTipViewMessage;
	unsigned long m_uiCountDown;
}
@property(retain, nonatomic) id m_userData;
@property(assign, nonatomic) unsigned long m_uiCountDown;
@property(retain, nonatomic) NSString* m_nsTipViewMessage;
-(void).cxx_destruct;
-(void)showWithAnimated:(int)animated;
-(void)countDownTip;
-(void)dealloc;
@end

