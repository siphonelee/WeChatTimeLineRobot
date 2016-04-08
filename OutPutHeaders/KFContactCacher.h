/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class KFContact, NSString, WCDataBase, NSMutableDictionary, WCDataBaseTable;
@protocol KFContactCacherDelegate;

@interface KFContactCacher : XXUnknownSuperclass {
	WCDataBaseTable* _table;
	NSString* _brandUsrName;
	NSMutableDictionary* _dictOpenId2KFContact;
	WCDataBase* _db;
	KFContact* _bindKF;
	id<KFContactCacherDelegate> delegate;
}
@property(assign, nonatomic) __weak id<KFContactCacherDelegate> delegate;
-(void).cxx_destruct;
-(BOOL)isNeedUpdateKFContactInfo:(id)info;
-(void)setHeadImgUpdateFlag:(id)flag oldContact:(id)contact;
-(id)tableName;
-(id)pathForBindKFContact;
-(void)updateBindKFContact:(id)contact;
-(id)getBindKFContact;
-(void)modifyHeadImgUpdateFlag:(id)flag isNeedUpdate:(BOOL)update;
-(id)getKFContactList:(id)list;
-(id)getKFContact:(id)contact;
-(void)deleteAllKFContacts;
-(void)deleteKFContact:(id)contact;
-(void)addOrUpdateKFContactList:(id)list;
-(void)addOrUpdateKFContact:(id)contact;
-(id)initWithBrandUsrName:(id)brandUsrName withDB:(id)db;
@end

