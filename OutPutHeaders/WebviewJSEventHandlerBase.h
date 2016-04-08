/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WebviewJSEventHandler.h"
#import "MMObject.h"

@class JSEvent, NSString;
@protocol WebviewJSEventHandlerBaseDelegate;

@interface WebviewJSEventHandlerBase : MMObject <WebviewJSEventHandler> {
	id<WebviewJSEventHandlerBaseDelegate> m_delegate;
	JSEvent* _currentEvent;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) JSEvent* currentEvent;
@property(assign, nonatomic) __weak id<WebviewJSEventHandlerBaseDelegate> m_delegate;
-(void).cxx_destruct;
-(void)dealloc;
-(id)webviewController;
-(void)OnWillAnimateRotationToInterfaceOrientation:(int)on duration:(double)duration;
-(void)handleJSEvent:(id)event HandlerFacade:(id)facade ExtraData:(id)data;
@end

