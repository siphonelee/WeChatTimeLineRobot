/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMImagePickerControllerDelegate.h"
#import "MMUINavigationController.h"
#import "MMImagePickerControlCenter.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class MMImagePickerControllerPreviewReportObject, MMAlbumPickerController, NSArray, NSString;

@interface MMImagePickerController : MMUINavigationController <MMImagePickerControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, MMImagePickerControlCenter> {
	BOOL _canSendOriginImage;
	BOOL _canSendVideoMessage;
	BOOL _isOnlyShowVideoMessage;
	BOOL _isNotShowVideoSizeAlertView;
	BOOL _canSendMultiImage;
	BOOL _needThumbImage;
	BOOL _showPreviewView;
	BOOL _isOriginalImage;
	id<MMImagePickerControllerDelegate> m_delegate;
	MMAlbumPickerController* _photoPicker;
	int _maxImageCount;
	int _compressType;
	NSString* _finishWording;
	NSString* _currentAlbum;
	NSArray* _selectedImageURLs;
	NSArray* _selectedImageAssets;
	MMImagePickerControllerPreviewReportObject* m_previewReportObject;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) MMImagePickerControllerPreviewReportObject* m_previewReportObject;
@property(retain, nonatomic) NSString* currentAlbum;
@property(assign, nonatomic) BOOL isOriginalImage;
@property(retain, nonatomic) NSString* finishWording;
@property(assign, nonatomic) int compressType;
@property(retain, nonatomic) NSArray* selectedImageAssets;
@property(retain, nonatomic) NSArray* selectedImageURLs;
@property(assign, nonatomic) int maxImageCount;
@property(assign, nonatomic) BOOL showPreviewView;
@property(assign, nonatomic) BOOL needThumbImage;
@property(assign, nonatomic) BOOL canSendMultiImage;
@property(assign, nonatomic) BOOL isNotShowVideoSizeAlertView;
@property(assign, nonatomic) BOOL isOnlyShowVideoMessage;
@property(assign, nonatomic) BOOL canSendVideoMessage;
@property(assign, nonatomic) BOOL canSendOriginImage;
@property(assign, nonatomic) __weak MMAlbumPickerController* photoPicker;
@property(assign, nonatomic) __weak id<MMImagePickerControllerDelegate> m_delegate;
-(void).cxx_destruct;
-(void)imagePickerControllerDidCancel:(id)imagePickerController;
-(void)imagePickerController:(id)controller didFinishPickingMediaWithInfo:(id)info;
-(void)MMImagePickerControllerDidCancel:(id)mmimagePickerController;
-(void)MMImagePickerController:(id)controller didFinishPickingMediaWithInfo:(id)info;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(int)getPickerScene;
-(void)reportPreviewCount;
-(void)increasePreviewCount;
-(void)selectedVideo:(id)video;
-(void)selectedAssets:(id)assets;
-(void)cancelImagePicker;
-(void)removeImageDatas;
-(id)init;
-(id)initForJustReturnMMAsset:(BOOL)justReturnMMAsset withAdjustRevertIndex:(unsigned)adjustRevertIndex withDirectToFirstAlbum:(BOOL)firstAlbum withOnlyShowVideoMessage:(BOOL)onlyShowVideoMessage withNotShowVideoSizeAlertView:(BOOL)notShowVideoSizeAlertView;
@end

