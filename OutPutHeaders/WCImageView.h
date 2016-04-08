/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCActionSheetDelegate.h"
#import "WCForceTouchPreviewProtocol.h"
#import "WeChat-Structs.h"
#import "MMUIControl.h"
#import "WCFacadeExt.h"

@class UILabel, UIView, UIImageView, NSString, WCMediaItem, UIImage, MMFICImageTableChunk, UINavigationController, WCDataItem;
@protocol WCImageViewDelegate;

@interface WCImageView : MMUIControl <WCFacadeExt, WCActionSheetDelegate, WCForceTouchPreviewProtocol> {
	WCDataItem* m_dataItem;
	WCMediaItem* m_mediaData;
	int m_uiImageType;
	int m_uiPrecedentImageType;
	unsigned long m_uiSourceType;
	BOOL m_bIsLongPressHandled;
	int m_style;
	int m_photoType;
	BOOL m_isImageReady;
	UIImageView* m_imageView;
	UINavigationController* navigationController;
	UIImageView* m_lockStausView;
	UIImageView* m_sharedStausView;
	UILabel* m_nickLabel;
	UIView* m_highLightView;
	id<WCImageViewDelegate> m_delegate;
	BOOL _isGridPreviewImg;
	MMFICImageTableChunk* _imageDataChunk;
	UIImage* m_image;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) MMFICImageTableChunk* imageDataChunk;
@property(assign, nonatomic) __weak UINavigationController* navigationController;
@property(assign, nonatomic) __weak id<WCImageViewDelegate> m_delegate;
@property(assign, nonatomic) unsigned long m_uiSourceType;
@property(retain, nonatomic) WCDataItem* m_dataItem;
@property(readonly, assign, nonatomic) BOOL m_isImageReady;
@property(assign, nonatomic) int m_photoType;
@property(assign, nonatomic) int m_style;
@property(readonly, assign, nonatomic) UIImageView* m_imageView;
@property(readonly, assign, nonatomic) UIImage* m_image;
@property(readonly, assign, nonatomic) int m_uiImageType;
@property(readonly, assign, nonatomic) WCMediaItem* m_mediaData;
-(void).cxx_destruct;
-(CGRect)previewingSourceRectForLocation:(CGPoint)location inCoordinateView:(id)coordinateView;
-(id)viewControllerToPreviewWithFromController:(id)controller forLocation:(CGPoint)location inCoordinateView:(id)coordinateView;
-(BOOL)canPeek;
-(void)showOwnerNickname:(BOOL)nickname username:(id)username;
-(void)showSharedStatus:(BOOL)status;
-(void)showLockStatus:(BOOL)status;
-(void)LongPressEvents;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)animationShow:(BOOL)show;
-(void)onDownloadFinish:(id)finish downloadType:(int)type;
-(void)triggerClickAction;
-(void)onClickWCImage:(id)image;
-(void)setFrame:(CGRect)frame;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)highlighted;
-(void)dealloc;
-(id)initWithMediaData:(id)mediaData imageType:(int)type isGridPreviewImg:(BOOL)img;
-(id)initWithMediaData:(id)mediaData imageType:(int)type precedentImageType:(int)type3;
-(id)initWithMediaData:(id)mediaData imageType:(int)type;
-(void)initData:(id)data imageType:(int)type precedentImageType:(int)type3;
-(void)reloadImage;
-(id)getImage;
@end
