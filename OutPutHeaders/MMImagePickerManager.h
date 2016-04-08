/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ImageBrowseDelegate.h"
#import "MMObject.h"
#import "MMImagePickerControllerDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "MultiImagePickerControllerDelegate.h"

@class NSMutableArray, MMImagePickerManagerOptionObj, NSString;
@protocol MMImagePickerManagerDelegate;

@interface MMImagePickerManager : MMObject <MultiImagePickerControllerDelegate, MMImagePickerControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, ImageBrowseDelegate> {
	id<MMImagePickerManagerDelegate> m_delegate;
	MMImagePickerManagerOptionObj* _optionObj;
	NSMutableArray* _tempImagePool;
}
@property(retain, nonatomic) NSMutableArray* tempImagePool;
@property(retain, nonatomic) MMImagePickerManagerOptionObj* optionObj;
@property(assign, nonatomic) __weak id<MMImagePickerManagerDelegate> m_delegate;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(BOOL)isCaptureByImagePicker:(id)picker;
+(id)getImagePickerControllerWithOptionObj:(id)optionObj;
+(id)getImagePickerFromCameraWithOptionObj:(id)optionObj withManager:(id)manager;
+(id)getImagePickerFromPhotoLibraryWithOptionObj:(id)optionObj withManager:(id)manager;
+(void)showWithOptionObj:(id)optionObj inViewController:(id)viewController;
+(BOOL)isSupportViewController:(id)controller;
-(void).cxx_destruct;
-(void)OnShowDidFinished;
-(void)OnShowWillFinished;
-(id)init;
-(void)didSelectImage:(id)image Data:(id)data Finish:(BOOL)finish fromImagePicker:(id)imagePicker;
-(void)didSelectImage:(id)image Data:(id)data fromImagePicker:(id)imagePicker;
-(void)didSelectImage:(id)image fromImagePicker:(id)imagePicker;
-(void)sendImages:(id)images originalInfos:(id)infos newInfos:(id)infos3;
-(void)imagePickerController:(id)controller didFinishPickingImages:(id)images;
-(void)MMVideoPickerControllerDidCancel:(id)mmvideoPickerController;
-(void)MMVideoPickerController:(id)controller didFinishPickingMediaWithInfo:(id)info;
-(void)MMImagePickerControllerDidCancel:(id)mmimagePickerController;
-(void)MMImagePickerController:(id)controller didFinishPickingMediaWithInfo:(id)info;
-(void)imagePickerControllerDidCancel:(id)imagePickerController;
-(void)imagePickerController:(id)controller didFinishPickingMediaWithInfo:(id)info;
-(void)navigationController:(id)controller willShowViewController:(id)controller2 animated:(BOOL)animated;
-(void)navigationController:(id)controller didShowViewController:(id)controller2 animated:(BOOL)animated;
@end

