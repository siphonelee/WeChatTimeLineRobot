/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "IEmoticonPackageStateMgrExt.h"
#import "IEmoticonPackageMgrExt.h"
#import "MMUIView.h"

@class UIImageView, UILabel, EmotionProgressView, NSString, UIActivityIndicatorView, MMWebImageView, UIButton, EmoticonStoreItem;
@protocol MMEmotionChartsCellDelegate;

@interface MMEmotionChartsCell : MMUIView <IEmoticonPackageMgrExt, IEmoticonPackageStateMgrExt> {
	int _type;
	int _scene;
	BOOL m_freeToDownload;
	BOOL m_showBlackLine;
	NSString* m_storeSession;
	UIImageView* m_downloadedView;
	UIButton* m_button;
	UIActivityIndicatorView* m_activityIndicatorView;
	EmoticonStoreItem* m_storeItem;
	EmotionProgressView* m_progressView;
	MMWebImageView* m_tagImageView;
	MMWebImageView* m_iconImageView;
	UILabel* m_nameLabel;
	UILabel* m_inroduceLabel;
	id<MMEmotionChartsCellDelegate> m_delegate;
	unsigned long m_extrance;
	UIButton* m_downloadButton;
	float m_cellHeight;
	UIButton* _m_downloadedButton;
}
@property(assign, nonatomic) float m_cellHeight;
@property(assign, nonatomic) BOOL m_showBlackLine;
@property(assign, nonatomic) BOOL m_freeToDownload;
@property(retain, nonatomic) UILabel* m_inroduceLabel;
@property(retain, nonatomic) UILabel* m_nameLabel;
@property(retain, nonatomic) MMWebImageView* m_tagImageView;
@property(retain, nonatomic) MMWebImageView* m_iconImageView;
@property(retain, nonatomic) EmotionProgressView* m_progressView;
@property(retain, nonatomic) EmoticonStoreItem* m_storeItem;
@property(retain, nonatomic) UIActivityIndicatorView* m_activityIndicatorView;
@property(retain, nonatomic) UIButton* m_downloadButton;
@property(retain, nonatomic) UIButton* m_button;
@property(retain, nonatomic) UIButton* m_downloadedButton;
@property(retain, nonatomic) UIImageView* m_downloadedView;
@property(retain, nonatomic) NSString* m_storeSession;
@property(assign, nonatomic) __weak id<MMEmotionChartsCellDelegate> m_delegate;
@property(assign, nonatomic) unsigned long m_extrance;
-(void).cxx_destruct;
-(void)OnEmoticonPackageDownloadStatusChanged:(id)changed IsDownloaded:(BOOL)downloaded;
-(void)OnBuyItemCancel:(id)cancel;
-(void)OnBuyItemFailed:(id)failed;
-(void)OnBuyItemSuccess:(id)success;
-(void)OnDownloadProgressChanged:(id)changed CurrLength:(unsigned)length TotalLength:(unsigned)length3;
-(void)OnUpdateEmoticonPackageState:(id)state toState:(int)state2;
-(void)checkEmoticonBuyRet:(int)ret;
-(void)onClickButton;
-(void)onClickDownloadButton;
-(void)onState:(int)state;
-(void)loadSubView;
-(void)layoutSubviews;
-(void)loadIntroduceLabel;
-(void)loadNameLabel;
-(void)loadTagImageView;
-(void)loadIconImageView;
-(void)initStoreSession:(id)session StoreItem:(id)item ShouldShowBlackLine:(BOOL) CellHeight:(float)height;
-(void)setScene:(int)scene andType:(int)type;
-(void)dealloc;
@end

