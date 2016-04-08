/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"

@class NSArray, NSString;

@protocol MMImagePickerControlCenter <NSObject>
@property(assign, nonatomic) BOOL isOriginalImage;
@property(retain, nonatomic) NSString* currentAlbum;
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
-(void)selectedVideo:(id)video;
-(void)selectedAssets:(id)assets;
-(void)cancelImagePicker;
@optional
-(int)getPickerScene;
-(void)reportPreviewCount;
-(void)increasePreviewCount;
@end

