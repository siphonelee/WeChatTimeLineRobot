/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "PBMessageObserverDelegate.h"

@class NSData;
@protocol VoIPTokenRegisterObjectDelegate;

@interface VoIPTokenRegisterObject : XXUnknownSuperclass <PBMessageObserverDelegate> {
	NSData* m_token;
	id<VoIPTokenRegisterObjectDelegate> _m_delegate;
}
@property(retain, nonatomic) NSData* m_token;
@property(assign, nonatomic) __weak id<VoIPTokenRegisterObjectDelegate> m_delegate;
-(void).cxx_destruct;
-(void)callOkDelegate;
-(void)callErrorDelegate;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)startRequest;
-(id)initWithToken:(id)token;
@end

