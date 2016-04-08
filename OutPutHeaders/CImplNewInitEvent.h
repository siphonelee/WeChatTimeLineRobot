/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "CSyncBaseEvent.h"

@class NSData, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CImplNewInitEvent : CSyncBaseEvent {
	NSString* m_nsUsrName;
	NSData* m_dtCurSyncBuffer;
	NSData* m_dtMaxSyncBuffer;
	unsigned long m_uiScene;
	NSObject<OS_dispatch_queue>* m_worker;
}
@property(retain, nonatomic) NSObject<OS_dispatch_queue>* m_worker;
@property(retain, nonatomic) NSData* m_dtMaxSyncBuffer;
@property(retain, nonatomic) NSData* m_dtCurSyncBuffer;
@property(retain, nonatomic) NSString* m_nsUsrName;
-(void).cxx_destruct;
-(BOOL)Start:(unsigned*)start RetInfo:(id)info;
-(BOOL)SetEventInfo:(id)info;
-(void)dealloc;
-(id)init;
@end

