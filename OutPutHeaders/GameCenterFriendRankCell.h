/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "IGameCenterExt.h"
#import "MMTableViewCell.h"

@class MMHeadImageView, UIButton, NSString, GameCenterUserRankInfo, UILabel;
@protocol GameCenterFriendRankCellDelegate;

@interface GameCenterFriendRankCell : MMTableViewCell <IGameCenterExt> {
	UILabel* _rankLabel;
	MMHeadImageView* _headImgView;
	UILabel* _displayNameLabel;
	UILabel* _labelLabel;
	UILabel* _scoreLabel;
	UIButton* _titleButton;
	UIButton* _upButton;
	UILabel* _upCountLabel;
	UILabel* _timeScoreLabel;
	GameCenterUserRankInfo* _rankInfo;
	BOOL _isHighlighted;
	int _viewType;
	id<GameCenterFriendRankCellDelegate> _delegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<GameCenterFriendRankCellDelegate> delegate;
@property(assign, nonatomic) int viewType;
@property(retain, nonatomic) GameCenterUserRankInfo* rankInfo;
+(float)heightForCellWithViewType:(int)viewType;
-(void).cxx_destruct;
-(void)onUpFriend:(id)aFriend appID:(id)anId errCode:(int)code;
-(void)upButtonClicked:(id)clicked;
-(void)up;
-(float)layoutContentWithUpButton:(float)upButton;
-(float)layoutContentWithoutUpButton:(float)button;
-(void)layoutContent;
-(void)reloadData;
-(void)initializeSubview;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end

