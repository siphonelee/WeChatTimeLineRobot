/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMMultiMenuTableViewCell.h"

@class UIImageView, UILabel, EnterpriseBrandEntryItemViewLayoutParam;

@interface EnterpriseBrandEntryItemView : MMMultiMenuTableViewCell {
	EnterpriseBrandEntryItemViewLayoutParam* _layoutParam;
	UIImageView* _iconView;
	UILabel* _titleLabel;
}
+(float)cellHeight;
-(void).cxx_destruct;
-(void)updateWithImageName:(id)imageName title:(id)title;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)reuseIdentifier;
@end

