/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NetCmdEvent.h"

@class CThrowBottleWrap;

@interface CThrowBottleEvent : NetCmdEvent {
	CThrowBottleWrap* m_wrapThrowBottle;
}
@property(retain, nonatomic) CThrowBottleWrap* m_wrapThrowBottle;
-(void).cxx_destruct;
-(void)NotifyFromPrtl:(unsigned long)prtl MessageInfo:(id)info;
-(BOOL)Start:(unsigned*)start RetInfo:(id)info;
-(BOOL)SetEventInfo:(id)info;
-(void)dealloc;
-(id)init;
@end

