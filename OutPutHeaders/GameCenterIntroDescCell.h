/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMTableViewCell.h"

@class UIButton, NSString, UILabel;
@protocol GameCenterIntroDescCellDelegate;

@interface GameCenterIntroDescCell : MMTableViewCell {
	UILabel* _descLabel;
	UIButton* _foldButton;
	NSString* _descContent;
	BOOL _isFolded;
	id<GameCenterIntroDescCellDelegate> _delegate;
}
@property(assign, nonatomic) __weak id<GameCenterIntroDescCellDelegate> delegate;
+(float)heightForCellWithDesc:(id)desc isFolded:(BOOL)folded;
+(float)heightForLabel:(id)label isFolded:(BOOL)folded;
-(void).cxx_destruct;
-(BOOL)shouldShowFoldButton:(id)button;
-(void)buttonClicked;
-(void)layoutContent;
-(void)reloadData;
-(void)initializeSubview;
-(void)updateWithDesc:(id)desc isFolded:(BOOL)folded;
-(void)layoutSubviews;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end

