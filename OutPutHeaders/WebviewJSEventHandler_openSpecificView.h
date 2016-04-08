/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WebviewJSEventHandlerBase.h"
#import "BrandOpenSpecificViewHandlerDelegate.h"
#import "VerifyPhoneDelegate.h"

@class BrandOpenSpecificViewHandler, NSString;

@interface WebviewJSEventHandler_openSpecificView : WebviewJSEventHandlerBase <VerifyPhoneDelegate, BrandOpenSpecificViewHandlerDelegate> {
	BrandOpenSpecificViewHandler* _openSpecificViewHandler;
	BOOL _isDismissCurrentViewController;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(id)getCurrentController;
-(BOOL)shouldDismissCurrentViewController;
-(void)handleJSEvent:(id)event HandlerFacade:(id)facade ExtraData:(id)data;
@end

