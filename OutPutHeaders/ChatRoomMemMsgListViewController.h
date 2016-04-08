/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMUIViewController.h"
#import "UIScrollViewDelegate.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "ChatRoomMemMsgDataLogicDelegate.h"
#import "MMRefreshTableFooterDelegate.h"

@class ChatRoomMemMsgDataLogic, NSMutableArray, CContact, NSString, MMTableView, NSMutableDictionary, WCTimeLineFooterView, ViewAppMsgController;

@interface ChatRoomMemMsgListViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate, MMRefreshTableFooterDelegate, ChatRoomMemMsgDataLogicDelegate> {
	MMTableView* m_tableView;
	WCTimeLineFooterView* m_footerView;
	NSMutableArray* m_arrMsg;
	NSMutableDictionary* m_dicMsgView;
	ChatRoomMemMsgDataLogic* m_logic;
	BOOL m_bHasMoreItems;
	NSString* m_nsChatName;
	CContact* m_oMemContact;
	BOOL m_bLoading;
	ViewAppMsgController* m_viewAppMsgController;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)MMRefreshTableFooterDidTriggerRefresh:(id)mmrefreshTableFooter;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)getMoreData;
-(void)onChatRoomMemMsgDataDone:(id)done End:(BOOL)end;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)getViewFor:(id)aFor;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)onBackButtonClicked:(id)clicked;
-(void)updateTableFooterHeaderView;
-(id)initWithChat:(id)chat memContact:(id)contact;
@end

