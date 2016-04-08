/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "IWebviewResourceManagerExt.h"
#import "WebviewJSEventHandlerBase.h"
#import "WCActionSheetDelegate.h"
#import "MMImagePickerManagerDelegate.h"

@class NSString;

@interface WebviewJSEventHandler_chooseImage : WebviewJSEventHandlerBase <WCActionSheetDelegate, MMImagePickerManagerDelegate, IWebviewResourceManagerExt> {
	unsigned long m_imgCnt;
	int m_sizeType;
	int m_sourceType;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void)delayNotifyWeb:(id)web;
-(void)onLocalImageSaveFinish:(id)finish;
-(void)MMImagePickerManagerDidCancel:(id)mmimagePickerManager;
-(void)MMImagePickerManager:(id)manager didFinishPickingImageWithInfo:(id)info;
-(int)getImagePickerSizeType:(id)type;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)showImagePicker:(int)picker;
-(void)asyncHandleCancel;
-(void)handleJSEvent:(id)event HandlerFacade:(id)facade ExtraData:(id)data;
-(void)dealloc;
-(id)init;
@end

