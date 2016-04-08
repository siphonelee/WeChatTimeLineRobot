/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PBMessageObserverDelegate.h"
#import "APBase.h"

@class NSURL;
@protocol APAccessDelegate;

@interface APAccess : APBase <PBMessageObserverDelegate> {
	NSURL* _thirdPartyUrl;
	id<APAccessDelegate> _delegate;
}
@property(assign, nonatomic) __weak id<APAccessDelegate> delegate;
@property(retain, nonatomic) NSURL* thirdPartyUrl;
-(void).cxx_destruct;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)onAPAccess:(id)access;
-(void)sendToWeixinSvrToAPAccess;
-(void)didFail;
-(void)didSuccess;
-(void)cancel;
-(void)start;
-(id)initWithSsid:(id)ssid mac:(id)mac thirdPartyUrl:(id)url delegate:(id)delegate;
-(void)dealloc;
@end
