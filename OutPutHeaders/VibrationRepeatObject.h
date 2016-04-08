/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NotMainQueueTimerDelegate.h"

@class NotMainQueueTimer, NSTimer, NSString;

@interface VibrationRepeatObject : XXUnknownSuperclass <NotMainQueueTimerDelegate> {
	NSTimer* _m_inAppTimer;
	NotMainQueueTimer* _m_outAppTimer;
	int _m_outAppVibrationCount;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) int m_outAppVibrationCount;
@property(retain, nonatomic) NotMainQueueTimer* m_outAppTimer;
@property(retain, nonatomic) NSTimer* m_inAppTimer;
-(void).cxx_destruct;
-(void)onNotMainQueueTimerCallback;
-(void)callOutAppVibration;
-(void)callInAppVibration;
-(void)dealloc;
-(void)stopOutAppVibration;
-(void)stopInAppVibration;
-(void)repeatOutAppVibration;
-(void)repeatInAppVibration;
@end

