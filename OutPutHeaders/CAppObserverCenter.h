/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NotifyFromMainCtrlDelegate.h"

@class NSMutableDictionary;

@interface CAppObserverCenter : XXUnknownSuperclass <NotifyFromMainCtrlDelegate> {
	NSMutableDictionary* m_eventObserverDic;
	NSMutableDictionary* m_messageObserverDic;
	NSMutableDictionary* m_pbEventObserverDic;
	NSMutableDictionary* m_observer2EventDict;
	NSMutableDictionary* m_observer2MessageDict;
	NSMutableDictionary* m_observer2PbEventDict;
}
@property(readonly, assign, nonatomic) NSMutableDictionary* m_messageObserverDic;
-(void).cxx_destruct;
-(void)NotifyFromMainCtrl:(id)mainCtrl Event:(unsigned long)event;
-(void)NotifyFromMainCtrl:(unsigned long)mainCtrl MessageInfo:(id)info Event:(unsigned long)event;
-(void)removeAllPBEventObserverListItem;
-(void)removePBEventObserverListItemByObject:(id)object;
-(void)removePBEventObserverListItem:(unsigned long)item andValue:(id)value;
-(void)addPBEventObserverListItem:(unsigned long)item andValue:(id)value;
-(void)removeAllMessageObserverListItem;
-(void)removeMessageObserverListItem:(unsigned long)item andValue:(id)value;
-(void)removeMessageObserverListItemByObject:(id)object;
-(void)addMessageObserverListItem:(unsigned long)item andValue:(id)value;
-(void)removeAllEventObserverListItem;
-(void)removeEventObserverListItemByObject:(id)object;
-(void)removeEventObserverListItem:(unsigned long)item andValue:(id)value;
-(void)addEventObserverListItem:(unsigned long)item andValue:(id)value;
-(void)removeObserverObject:(id)object event2Observer:(id)observer observer2Event:(id)event;
-(void)removeObserverForEventOrMsg:(unsigned long)eventOrMsg observer:(id)observer event2Observer:(id)observer3 observer2Event:(id)event;
-(void)addObserverForEventOrMsg:(unsigned long)eventOrMsg observer:(id)observer event2Observer:(id)observer3 observer2Event:(id)event;
-(id)observerKey:(id)key;
-(id)init;
@end

