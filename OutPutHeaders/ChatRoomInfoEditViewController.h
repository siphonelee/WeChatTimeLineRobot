/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMUIViewController.h"
#import "IGroupMgrExt.h"
#import "UITextFieldDelegate.h"
#import "MMTableViewInfoDelegate.h"

@class UITextField, CContact, MMTableViewInfo, NSString, NSMutableDictionary;

@interface ChatRoomInfoEditViewController : MMUIViewController <IGroupMgrExt, UITextFieldDelegate, MMTableViewInfoDelegate> {
	CContact* m_chatRoomContact;
	MMTableViewInfo* m_tableViewInfo;
	NSString* m_nsOriginChatRoomTopic;
	UITextField* m_topicTextField;
	NSMutableDictionary* m_dicParam;
	BOOL m_becomeFirstResponder;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) CContact* m_chatRoomContact;
-(void).cxx_destruct;
-(BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;
-(void)updateChatRoomTopicCount:(id)count;
-(void)OnSetChatRoomTopic:(id)topic ErrorInfo:(id)info Success:(BOOL)success;
-(void)checkNeedReload:(id)reload;
-(void)OnDone;
-(void)OnReturn;
-(void)doDismissView;
-(BOOL)isChanged;
-(void)makeEditCell:(id)cell CellInfo:(id)info;
-(void)makeTopicEditView;
-(void)reloadTableData;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
-(id)init;
@end

