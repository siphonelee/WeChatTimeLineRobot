/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCPayRealnameInfoViewControllerDelegate.h"
#import "WCPayControlLogic.h"

@class NSString;

@interface WCPayRealnameVerifyLogic : WCPayControlLogic <WCPayRealnameInfoViewControllerDelegate> {
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void)OnRealnameAuthen:(id)authen Error:(id)error;
-(void)FillRealnameInfoNext:(id)next;
-(void)FillRealnameInfoCancel;
-(void)startLogic;
@end

