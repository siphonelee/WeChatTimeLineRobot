/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WebviewJSEventHandlerBase.h"
#import "PBMessageObserverDelegate.h"


@interface WebviewJSEventHandler_newyearAddCard : WebviewJSEventHandlerBase <PBMessageObserverDelegate> {
}
-(void)statAddCardSucc:(id)succ;
-(void)statClickAddCard:(id)card;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)callResultFail:(id)fail retCode:(int)code retMsg:(id)msg retJson:(id)json;
-(void)callResultOK:(id)ok retMsg:(id)msg retJson:(id)json;
-(void)saveBuffer:(id)buffer;
-(id)loadBuffer;
-(id)pathForBuffer;
-(void)requestNewYearCard:(id)card;
-(void)handleJSEvent:(id)event HandlerFacade:(id)facade ExtraData:(id)data;
-(void)dealloc;
@end

