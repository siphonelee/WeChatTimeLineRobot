/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMUIView.h"
#import "RichTextLayoutDelegate.h"
#import "ILinkEventExt.h"

@class UILabel, UIView, NSString, UIButton, MMHeadImageView, MMWebImageView, RichTextView, GameCenterMsgCenterContent, UrlLabel;
@protocol GameCenterMsgCenterCellDataSource, GameCenterMsgCenterCellViewDelegate;

@interface GameCenterMsgCenterCellView : MMUIView <RichTextLayoutDelegate, ILinkEventExt> {
	MMWebImageView* m_iconView;
	MMHeadImageView* m_headerView;
	UILabel* m_nickLabel;
	RichTextView* m_contentLabel;
	UILabel* m_timeLabel;
	UrlLabel* m_sourceLabel;
	UILabel* m_actionLabel;
	UIView* m_textView;
	UIView* m_urlView;
	UIView* m_imageView;
	UIView* m_videoView;
	UIButton* m_actionBtn;
	UIView* m_backgroundView;
	id<GameCenterMsgCenterCellViewDelegate> _m_delegate;
	id<GameCenterMsgCenterCellDataSource> _m_dataSource;
	GameCenterMsgCenterContent* _m_msgItem;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) GameCenterMsgCenterContent* m_msgItem;
@property(assign, nonatomic) __weak id<GameCenterMsgCenterCellDataSource> m_dataSource;
@property(assign, nonatomic) __weak id<GameCenterMsgCenterCellViewDelegate> m_delegate;
-(void).cxx_destruct;
-(void)onActionBtnTouch;
-(void)onTouchUrlBtn;
-(void)onTouchVideoBackImageButton:(id)button;
-(void)onThumbClick;
-(void)onLinkClicked:(id)clicked backupUrl:(id)url withRect:(CGRect)rect;
-(BOOL)shouldOpenNewLineAtY:(float)y withLineHeight:(float)lineHeight richTextView:(id)view;
-(void)layoutSubviews;
-(void)setActionButton:(id)button;
-(void)setSource:(id)source AppId:(id)anId;
-(void)setTime:(unsigned long)time;
-(void)setContent:(id)content;
-(void)setMediaContentView:(int)view ThumbUrl:(id)url ThumbWidth:(float)width ThumbHeight:(float)height thumbContent:(id)content;
-(void)setSubtitle:(id)subtitle;
-(void)setNickname:(id)nickname;
-(void)setUsername:(id)username;
-(void)setIconUrl:(id)url;
-(id)initWithSize:(CGSize)size MsgItem:(id)item ViewDelegate:(id)delegate DataSource:(id)source;
@end

