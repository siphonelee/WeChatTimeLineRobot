/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMService.h"
#import "MMService.h"

@class NSString, WCDataBase, WCDataBaseTable;

@interface MultiTalkSessionMgr : MMService <MMService> {
	WCDataBase* _dataBase;
	WCDataBaseTable* _contactTable;
	WCDataBaseTable* _messageTable;
	WCDataBaseTable* _sessionTable;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) WCDataBaseTable* sessionTable;
@property(retain, nonatomic) WCDataBaseTable* messageTable;
@property(retain, nonatomic) WCDataBaseTable* contactTable;
@property(retain, nonatomic) WCDataBase* dataBase;
-(void).cxx_destruct;
-(id)getSubMessageContentWithSessionState:(unsigned)sessionState inviteUserNickName:(id)name;
-(id)getHeaderMessageContentWithSessionState:(unsigned)sessionState inviteUserNickName:(id)name;
-(id)genMsgJsonContentWithDisplayContentHeader:(id)displayContentHeader subContent:(id)content sessionItem:(id)item msgLocalID:(unsigned)anId;
-(BOOL)addNewMultiTalkChatroomMessageWithGroupData:(id)groupData sessionItem:(id)item msgLocalID:(unsigned)anId isSelfCaller:(BOOL)caller sessionState:(unsigned)state;
-(BOOL)addNewMultiTalkSessionMsgWithGroupData:(id)groupData;
-(BOOL)isGroupDataValid:(id)valid;
-(unsigned)getSessionLastMessageIDWithGroupData:(id)groupData;
-(BOOL)insertOrUpdateRowInSessionTable:(id)sessionTable;
-(BOOL)insertNewRowInSessionTable:(id)sessionTable;
-(BOOL)insertOrUpdateRowInMessageTable:(id)messageTable;
-(BOOL)insertNewRowInMessageTable:(id)messageTable;
-(BOOL)insertOrUpdateRowInContactTable:(id)contactTable;
-(BOOL)insertNewRowInContactTable:(id)contactTable;
-(void)fillSessionItemUpdatePropertiesForSessionObject:(vector<WCDBConditionBase, std::__1::allocator<WCDBConditionBase> >*)sessionObject;
-(void)fillMessageItemUpdatePropertiesForMessageObject:(vector<WCDBConditionBase, std::__1::allocator<WCDBConditionBase> >*)messageObject;
-(void)fillContactItemUpdatePropertiesForContactObject:(vector<WCDBConditionBase, std::__1::allocator<WCDBConditionBase> >*)contactObject;
-(id)genSessionItemWithGroupData:(id)groupData;
-(id)genMessageItemWithGroupData:(id)groupData;
-(id)genContactItemWithGroupData:(id)groupData;
-(id)getMultiTalkMsgDigestFromMessageContent:(id)messageContent;
-(id)getMessageItemWitgMsgLocalID:(unsigned)anId;
-(BOOL)isMessageExist:(unsigned)exist;
-(BOOL)isSessionExist:(id)exist;
-(id)genGroupDataFromSessionItem:(id)sessionItem;
-(BOOL)deleteSessionWithSessionItem:(id)sessionItem;
-(id)getMessageArrayFromSessionWithSessionItem:(id)sessionItem;
-(id)getLastMessageItemWithSessionItem:(id)sessionItem;
-(id)getContactItemFromSession:(id)session;
-(id)getMemberListFromSessionItem:(id)sessionItem;
-(id)getAllSessionItem;
-(BOOL)insertOrUpdateSessionWithMultiTalkGroupData:(id)multiTalkGroupData;
-(BOOL)updateMessageWithMessageID:(unsigned)messageID multiTalkGroup:(id)group duration:(unsigned long)duration;
-(BOOL)updateHasGenMessageWithMessageID:(unsigned)messageID;
-(BOOL)createNewMultiTalkMessageWithGroupData:(id)groupData messageID:(unsigned)anId isSelfCaller:(BOOL)caller sessionState:(unsigned)state;
-(unsigned)createNewMultiTalkMessageDataWithGroupData:(id)groupData;
-(BOOL)hasHistorySession;
-(id)internalCreateTable:(id)table tableClass:(Class)aClass;
-(void)createTables;
-(void)clearTables;
-(void)closeDBBeforeInit;
-(void)closeDB;
-(void)initDatabase;
-(id)init;
-(void)dealloc;
@end

