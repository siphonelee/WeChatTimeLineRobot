/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "ShareTo3rdAppManageCellDelegate.h"
#import "MMUIViewController.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"

@class NSMutableArray, NSString, MMTableView, CMessageWrap;

@interface ShareTo3rdAppSettingViewController : MMUIViewController <ShareTo3rdAppManageCellDelegate, UITableViewDelegate, UITableViewDataSource> {
	MMTableView* m_tableView;
	NSMutableArray* _arrSortedAppinfo;
	BOOL _bHasEdit;
	CMessageWrap* m_oMessageWrap;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) CMessageWrap* m_oMessageWrap;
-(void).cxx_destruct;
-(void)onSwitchChange:(BOOL)change withAppInfo:(id)appInfo;
-(void)tableView:(id)view moveRowAtIndexPath:(id)indexPath toIndexPath:(id)indexPath3;
-(BOOL)tableView:(id)view canMoveRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view shouldIndentWhileEditingRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view editingStyleForRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view canEditRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)initView;
-(void)initData;
-(void)viewDidLoad;
-(void)OnCancelModalView:(id)view;
-(id)init;
-(void)dealloc;
@end

