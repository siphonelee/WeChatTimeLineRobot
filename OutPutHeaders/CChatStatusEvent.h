/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NetCmdSendOnlyEvent.h"

@class NSString;

@interface CChatStatusEvent : NetCmdSendOnlyEvent {
	NSString* m_nsUsrName;
	unsigned long m_uiChatStatus;
}
@property(retain, nonatomic) NSString* m_nsUsrName;
-(void).cxx_destruct;
-(void)NotifyFromPrtl:(unsigned long)prtl MessageInfo:(id)info;
-(BOOL)Start:(unsigned*)start RetInfo:(id)info;
-(BOOL)SetEventInfo:(id)info;
-(void)dealloc;
-(id)init;
@end

