/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCActionSheetDelegate.h"
#import "UITextViewDelegate.h"
#import "MMExposeResultViewControllerDelegate.h"
#import "WeChat-Structs.h"
#import "UIAlertViewDelegate.h"
#import "MMUIViewController.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "SelectorControllerDelegate.h"

@class WCSelectorView, NSString, MMTableView, UIButton, ImageSelectorController, NSMutableArray;
@protocol ExposeEvidenceViewControllerDelegate;

@interface MMExposeEvidenceViewController : MMUIViewController <UIAlertViewDelegate, WCActionSheetDelegate, SelectorControllerDelegate, MMExposeResultViewControllerDelegate, UITextViewDelegate, UITableViewDelegate, UITableViewDataSource> {
	MMTableView* m_tableView;
	id<ExposeEvidenceViewControllerDelegate> m_delegate;
	NSMutableArray* m_arrProofItems;
	NSString* nsMsgEvidenceCount;
	NSString* nsImgEvidenceCount;
	ImageSelectorController* _imageSelectorController;
	WCSelectorView* _withImageView;
	NSMutableArray* m_arrProofImgAssets;
	UIButton* _noticeBtn;
	BOOL _m_bNeedImgEvidence;
	NSString* m_userName;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL m_bNeedImgEvidence;
@property(retain, nonatomic) NSString* m_userName;
@property(assign, nonatomic) __weak id<ExposeEvidenceViewControllerDelegate> m_delegate;
-(void).cxx_destruct;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)updateSelectorView;
-(BOOL)showAddView;
-(id)getViewController;
-(void)MMImagePickerManagerDidCancel:(id)mmimagePickerManager;
-(void)MMImagePickerManager:(id)manager didFinishPickingImageWithInfo:(id)info;
-(void)showImagePicker:(int)picker;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)onImgUploadAction;
-(void)updateEvidenceWithUserName:(id)userName andMsgIdList:(id)list;
-(void)onMsgUploadAction;
-(void)makeUploadImgCell:(id)cell;
-(void)makeUploadMsgCell:(id)cell;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(float)getImgRowHeight;
-(void)onExposeResultOK;
-(void)onNoticeDetail;
-(void)reloadNoticeBtn;
-(void)finishExpose:(BOOL)expose;
-(void)confirmExpose;
-(void)onExpose;
-(void)onReturn;
-(void)initTableView;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
-(id)init;
@end

