/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WebviewJSEventHandlerBase.h"
#import "PBMessageObserverDelegate.h"

@class JSEvent;

@interface WebviewJSEventHandler_operateWXData : WebviewJSEventHandlerBase <PBMessageObserverDelegate> {
	JSEvent* _event;
}
@property(retain, nonatomic) JSEvent* event;
-(void).cxx_destruct;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)getWXData:(id)data;
-(void)handleJSEvent:(id)event HandlerFacade:(id)facade ExtraData:(id)data;
@end

