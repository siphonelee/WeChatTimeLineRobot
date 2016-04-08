/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"
#import "MessageObserverDelegate.h"
#import "MMImagePickerManagerDelegate.h"
#import "WCActionSheetDelegate.h"

@class UIViewController, NSString, CUsrInfo;
@protocol settingMyAccountExtInfoLogicDelegate;

@interface SettingMyAccountExtInfoLogic : MMObject <WCActionSheetDelegate, MessageObserverDelegate, MMImagePickerManagerDelegate> {
	id<settingMyAccountExtInfoLogicDelegate> m_delegate;
	UIViewController* m_viewController;
	CUsrInfo* m_usrInfo;
	unsigned long m_uiUploadHeadEventID;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) CUsrInfo* m_usrInfo;
-(void).cxx_destruct;
-(void)MMImagePickerManagerDidCancel:(id)mmimagePickerManager;
-(void)MMImagePickerManager:(id)manager didFinishPickingImageWithInfo:(id)info;
-(void)dealloc;
-(void)reload;
-(void)resetViewControllerAndDelegate;
-(id)initWithViewController:(id)viewController delegate:(id)delegate;
-(void)MessageReturn:(unsigned long)aReturn MessageInfo:(id)info Event:(unsigned long)event;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)showChangeImg:(id)img;
-(void)onPhotoSave;
-(void)onPhotoLibrary;
-(void)onCamera;
-(void)handleImage:(id)image;
-(void)showImagePicker:(int)picker;
-(id)getNavigationController;
-(id)getViewController;
@end

