/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "IStoreEmotionDesignerInfoMgrExt.h"
#import "WebviewJSEventHandlerBase.h"

@class MMUIViewController, JSEvent, NSString;

@interface WebviewJSEventHandler_openDesignerProfile : WebviewJSEventHandlerBase <IStoreEmotionDesignerInfoMgrExt> {
	JSEvent* m_event;
	NSString* m_designerId;
	MMUIViewController* m_viewController;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)onGetDesignerForDesignerId:(id)designerId AndDesigner:(id)designer;
-(void)endWithFail;
-(void)endWithOk;
-(id)handleWithParams:(id)params AndViewController:(id)controller;
-(void)handleJSEvent:(id)event HandlerFacade:(id)facade ExtraData:(id)data;
-(void)dealloc;
@end

