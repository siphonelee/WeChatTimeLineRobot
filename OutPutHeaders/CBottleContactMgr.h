/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "MessageObserverDelegate.h"
#import "MMService.h"

@class NSString, CBottleContactDB, NSMutableDictionary;

@interface CBottleContactMgr : MMService <MMService, MessageObserverDelegate> {
	CBottleContactDB* m_oDB;
	NSMutableDictionary* m_dicContacts;
	BOOL m_bDataNeedReload;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)MessageReturn:(unsigned long)aReturn MessageInfo:(id)info Event:(unsigned long)event;
-(int)GetBottleContactCount;
-(void)saveImageStatus:(id)status ImgStatus:(id)status2;
-(void)onServiceTerminate;
-(void)onServiceEnterBackground;
-(BOOL)syncAllBottleContact;
-(BOOL)RemoveContactList:(id)list;
-(BOOL)addContact:(id)contact;
-(id)getContactByName:(id)name;
-(id)getSelfContact;
-(id)getAllContact;
-(void)initDB:(id)db lock:(id)lock;
-(BOOL)autoReload;
-(BOOL)setHDHeadUpdated:(id)updated;
-(void)dealloc;
-(id)init;
-(BOOL)onSyncBottleContact:(id)contact;
-(void)internalDeleteContact:(id)contact;
-(void)internalModifyContact:(id)contact;
-(void)internalAddContact:(id)contact;
-(void)removeListen;
-(void)initListen;
@end

