/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"
#import "PBMessageObserverDelegate.h"

@protocol JumpToBizWebviewLogicHelperDelegate;

@interface JumpToBizWebviewLogicHelper : MMObject <PBMessageObserverDelegate> {
	id<JumpToBizWebviewLogicHelperDelegate> _delegate;
}
@property(assign, nonatomic) __weak id<JumpToBizWebviewLogicHelperDelegate> delegate;
-(void).cxx_destruct;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)handleJumpToBizWebviewResponse:(id)bizWebviewResponse;
-(void)jumpToBizWebview:(id)bizWebview;
-(void)dealloc;
@end

