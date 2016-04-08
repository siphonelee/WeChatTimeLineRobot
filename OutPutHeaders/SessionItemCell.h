/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMTableViewCell.h"

@class UIButton, UIImageView, UILabel;

@interface SessionItemCell : MMTableViewCell {
	UIImageView* _selectedImage;
	UIImageView* _resourceIcon;
	UIButton* _detailButton;
	UILabel* _sizeLabel;
	UILabel* _sourceLabel;
	shared_ptr<ClearSessionItem> _sessionItem;
}
@property(readonly, assign, nonatomic) shared_ptr<ClearSessionItem> sessionItem;
@property(retain, nonatomic) UIButton* detailButton;
-(id).cxx_construct;
-(void).cxx_destruct;
-(void)updateSessionItem:(const shared_ptr<ClearSessionItem>*)item selected:(BOOL)selected;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
-(void)initView;
-(void)dealloc;
@end

