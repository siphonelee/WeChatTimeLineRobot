/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "CMultiEvent.h"

@class NSString;

@interface CGetSxEvent : CMultiEvent {
	unsigned long m_uiSyncCount;
	NSString* m_nsLastSyncKeyMD5;
}
-(void).cxx_destruct;
-(void)NotifyFromEvent:(id)event Message:(unsigned long)message MessageInfo:(id)info;
-(BOOL)CreateSyncEvent;
-(void)Stop;
-(BOOL)Start:(unsigned*)start RetInfo:(id)info;
-(void)TimerCheckEvent;
-(BOOL)SetEventInfo:(id)info;
-(void)dealloc;
-(id)init;
@end

