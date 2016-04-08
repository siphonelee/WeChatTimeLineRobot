/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "JSApiSelectContactsViewControllerDelegate.h"
#import "JSApiSelectSessionViewControllerDelegate.h"
#import "PBMessageObserverDelegate.h"
#import "WebviewJSEventHandlerBase.h"

@class JSApiSelectSessionViewController, JSEvent, CContact, JSApiSelectContactsViewController;

@interface WebviewJSEventHandler_selectSingleContact : WebviewJSEventHandlerBase <JSApiSelectContactsViewControllerDelegate, JSApiSelectSessionViewControllerDelegate, PBMessageObserverDelegate> {
	int m_enReturnValueSignedType;
	JSApiSelectSessionViewController* m_oSelectSessionViewController;
	JSApiSelectContactsViewController* m_oSelectContactViewController;
	JSEvent* m_oJSEvent;
	CContact* m_oSelectedContact;
}
-(void).cxx_destruct;
-(void)getIBGUserOpenIdRequest;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)OnJSApiSelectSessionViewControllerNewSession;
-(void)OnJSApiSelectSessionViewControllerSelectContactReturn:(id)aReturn atScene:(unsigned long)scene;
-(BOOL)OnJSApiSelectSessionViewControllerFilterContactCandidate:(id)candidate;
-(void)OnJSApiSelectSessionViewControllerBack;
-(void)OnJSApiSelectContactsViewControllerSelectContactReturn:(id)aReturn atScene:(unsigned long)scene;
-(BOOL)OnJSApiSelectContactsViewControllerFilterContactCandidate:(id)candidate;
-(void)OnJSApiSelectContactsViewControllerBack;
-(void)dealloc;
-(void)confirmEndJSEvent;
-(void)cancelEndJSEnvent;
-(void)handleJSEvent:(id)event HandlerFacade:(id)facade ExtraData:(id)data CurrentViewController:(id)controller;
-(void)handleJSEvent:(id)event HandlerFacade:(id)facade ExtraData:(id)data;
@end

