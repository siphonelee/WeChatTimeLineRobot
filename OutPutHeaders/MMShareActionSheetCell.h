/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSURL, UIImage, UIView, MMWebImageView, ShareOpenSDKStateItem, NSString, WCLanDeviceStateItemProgressView, UILabel;

@interface MMShareActionSheetCell : XXUnknownSuperclass {
	UIView* m_contentView;
	UIView* m_header;
	MMWebImageView* m_imageView;
	UILabel* m_titleLabel;
	UILabel* m_subTitleLabel;
	UIView* m_stateView;
	WCLanDeviceStateItemProgressView* m_progressView;
	UILabel* m_resultLabel;
	UIView* m_resultBgView;
	int m_index;
	NSString* m_title;
	UIImage* m_iconImg;
	NSURL* m_iconImgUrl;
	id m_userInfo;
	ShareOpenSDKStateItem* m_stateItem;
}
@property(retain, nonatomic) ShareOpenSDKStateItem* m_stateItem;
@property(retain, nonatomic) id m_userInfo;
@property(retain, nonatomic) NSURL* m_iconImgUrl;
@property(retain, nonatomic) UIImage* m_iconImg;
@property(copy, nonatomic) NSString* m_title;
@property(assign, nonatomic) int m_index;
-(void).cxx_destruct;
-(float)lineHeight;
-(id)init;
@end

