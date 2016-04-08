/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, NSString, WCDataBase, WCDataBaseTable;
@protocol FTSDBDelegate;

@interface FTSDB : XXUnknownSuperclass {
	NSString* _tokenizerName;
	WCDataBase* m_db;
	WCDataBaseTable* m_tableFav;
	NSDictionary* m_dicTableMessage;
	WCDataBaseTable* m_tableMsgUserNameID;
	id<FTSDBDelegate> _delegate;
}
@property(retain, nonatomic) WCDataBaseTable* m_tableMsgUserNameID;
@property(retain, nonatomic) NSDictionary* m_dicTableMessage;
@property(retain, nonatomic) WCDataBaseTable* m_tableFav;
@property(retain, nonatomic) WCDataBase* m_db;
@property(assign, nonatomic) __weak id<FTSDBDelegate> delegate;
@property(readonly, assign, nonatomic) NSString* tokenizerName;
-(void).cxx_destruct;
-(BOOL)isFTSDB:(unsigned)ftsdb;
-(void)recoverDB;
-(void)closeDBBeforeInit;
-(void)closeDB;
-(BOOL)reloadDB;
-(BOOL)initDB;
-(void)dealloc;
-(id)init;
-(id)msgTableWithIndex:(unsigned)index;
-(unsigned)validMsgTableIndex:(unsigned)index;
-(id)msgTableNameWithIndex:(unsigned)index;
-(BOOL)createAllMsgTable;
-(id)queryMsgItemOmitMsg:(id)msg tableIndex:(unsigned)index;
-(BOOL)deleteInvalidRowsInChatTable:(id)chatTable limit:(unsigned)limit;
-(BOOL)deleteRowInChatTable:(id)chatTable arrMsgWrap:(id)wrap;
-(BOOL)deleteRowInChatTable:(id)chatTable msgWrap:(id)wrap;
-(BOOL)insertRowsInChatTable:(id)chatTable arrMsgWrap:(id)wrap;
-(unsigned)MsgTableCount;
-(unsigned)tableIdFromUserName:(id)userName;
-(BOOL)createUserNameIdTable;
-(BOOL)deleteRowInUserNameIDTable:(unsigned long)userNameIDTable;
-(BOOL)updateUserPreCursorMesId:(unsigned)anId cursorMesId:(unsigned long)anId2;
-(BOOL)updateUserNextCursorMesId:(unsigned)anId cursorMesId:(unsigned long)anId2;
-(BOOL)updateUserNameInvalid:(unsigned)invalid;
-(BOOL)insertNewRowInUserNameIDTable:(id)userNameIDTable lastMsg:(id)msg;
-(id)getUserNameIdWithLimit:(unsigned)limit;
-(id)getValidIndexItemByUserNameId:(unsigned long)anId;
-(id)getValidIndexItemByUserName:(id)name;
-(BOOL)CreateMessageTable;
-(id)queryTextInFavTable:(id)favTable limit:(unsigned long)limit searchAll:(id*)all;
-(id)queryTextInFavTable:(id)favTable;
-(BOOL)deleteAllRowsInFavTable;
-(BOOL)deleteRowsInFavTable:(id)favTable;
-(BOOL)deleteRowInFavTable:(unsigned long)favTable;
-(BOOL)updateRowsInFavTable:(id)favTable;
-(BOOL)updateRowInFavTable:(id)favTable;
-(BOOL)insertRowsInFavTable:(id)favTable;
-(BOOL)insertRowInFavTable:(id)favTable;
-(BOOL)createFavTable;
@end

