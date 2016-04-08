/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "WCActionSheetDelegate.h"
#import "MMUIViewController.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "MMImagePickerManagerDelegate.h"
#import "MessageObserverDelegate.h"
#import "MMPickerViewDelegate.h"

@class NSString, DelaySwitchSettingLogic, MMLoadingView, MMTableView, MMHeadImageView;

@interface BottleModHeadImgViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, MessageObserverDelegate, MMPickerViewDelegate, WCActionSheetDelegate, MMImagePickerManagerDelegate> {
	MMTableView* m_tableView;
	MMHeadImageView* m_headImage;
	MMLoadingView* m_loadingView;
	unsigned long m_uiUploadHeadEventID;
	DelaySwitchSettingLogic* m_delaySwitchLogic;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)MMImagePickerManagerDidCancel:(id)mmimagePickerManager;
-(void)MMImagePickerManager:(id)manager didFinishPickingImageWithInfo:(id)info;
-(void)MessageReturn:(unsigned long)aReturn MessageInfo:(id)info Event:(unsigned long)event;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view viewForFooterInSection:(int)section;
-(float)tableView:(id)view heightForFooterInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)makeShowInMainFrameCell:(id)mainFrameCell;
-(void)showInMainFrame:(id)mainFrame;
-(void)setShowInMainFrameOpen:(BOOL)mainFrameOpen configType:(unsigned long)type status:(unsigned long)status;
-(void)makeSetHeadImageCell:(id)cell;
-(void)updateHead:(id)head;
-(id)getSettingHeadImage;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)showChangeImg;
-(void)showImagePicker:(int)picker;
-(id)getViewController;
-(void)handleImage:(id)image;
-(void)stopLoadingAndShowOK:(id)ok;
-(void)stopLoadingAndShowError:(id)error;
-(void)stopLoading;
-(void)startLoading;
-(void)dealloc;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidLoad;
-(void)OnLeave:(id)leave;
@end

