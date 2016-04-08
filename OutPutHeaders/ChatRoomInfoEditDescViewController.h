/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "IGroupMgrExt.h"
#import "UITextViewDelegate.h"
#import "WeChat-Structs.h"
#import "textViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "MMUIViewController.h"
#import "MMTableViewInfoDelegate.h"

@class UILabel, UIView, NSString, MMTableViewCellInfo, CContact, NSMutableDictionary, MMTextView, MMTableViewInfo;

@interface ChatRoomInfoEditDescViewController : MMUIViewController <IGroupMgrExt, UITextViewDelegate, MMTableViewInfoDelegate, UIAlertViewDelegate, textViewDelegate> {
	CContact* m_chatRoomContact;
	MMTableViewInfo* m_tableViewInfo;
	NSString* m_nsOriginChatRoomDesc;
	MMTextView* m_descTextView;
	MMTableViewCellInfo* m_descCellInfo;
	UILabel* m_wordCountLabel;
	NSMutableDictionary* m_dicParam;
	BOOL m_bEditMode;
	BOOL m_bEditable;
	UIView* m_oHeaderView;
	UIView* m_oFooterView;
	BOOL _m_bHideEdit;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL m_bHideEdit;
@property(retain, nonatomic) CContact* m_chatRoomContact;
-(void).cxx_destruct;
-(void)keyboardWillHide:(id)keyboard;
-(void)keyboardWillShow:(id)keyboard;
-(void)touchesBegan_TableView:(id)view withEvent:(id)event;
-(void)scrollRectToVisibleForView:(id)view;
-(void)adjustDescTextView;
-(void)fixDescViewHeight;
-(BOOL)textView:(id)view shouldChangeTextInRange:(NSRange)range replacementText:(id)text;
-(void)textViewDidChange:(id)textView;
-(void)textViewDidBeginEditing:(id)textView;
-(void)updateWordCount:(int)count;
-(BOOL)textView:(id)view shouldInteractWithURL:(id)url inRange:(NSRange)range;
-(void)OnSetChatRoomDesc:(id)desc Desc:(id)desc2 Error:(id)error;
-(void)checkNeedReload:(id)reload;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)OnDone;
-(void)OnReturn;
-(void)OnEdit;
-(void)OnCancel;
-(void)doCancelEdit;
-(BOOL)isChanged;
-(void)makeEditCell:(id)cell CellInfo:(id)info;
-(void)makeDescEditView;
-(void)makeFooter;
-(id)makeHeader;
-(void)reloadTableData;
-(void)viewDidLoad;
-(void)updateEditMode;
-(void)updateText:(id)text;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
-(id)init;
@end

