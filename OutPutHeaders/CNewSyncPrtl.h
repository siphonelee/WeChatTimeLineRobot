/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "CSyncBasePrtl.h"

@class NSData, NSString, NSArray;

@interface CNewSyncPrtl : CSyncBasePrtl {
	NSArray* m_arrOplogList;
	unsigned long m_uiSelector;
	NSString* m_nsUsrName;
	NSData* m_dtSyncBuffer;
}
@property(retain, nonatomic) NSData* m_dtSyncBuffer;
@property(retain, nonatomic) NSString* m_nsUsrName;
@property(assign, nonatomic) unsigned long m_uiSelector;
@property(retain, nonatomic) NSArray* m_arrOplogList;
-(void).cxx_destruct;
-(BOOL)HandleResp:(void*)resp;
-(void)InitReq:(void*)req;
-(id)init;
@end

