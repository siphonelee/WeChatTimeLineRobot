/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BSSBaseItemView.h"

@class MMMusicPlayerContoller, AttributeLabel, MMWebImageView, BSBusinessContactItem, NSArray, UILabel;

@interface BSSMusicServiceItemView : BSSBaseItemView {
	BSBusinessContactItem* _dataItem;
	NSArray* _keywordList;
	MMWebImageView* _headImgView;
	AttributeLabel* _titleLabel;
	AttributeLabel* _singerLabel;
	UILabel* _sourceLabel;
	MMMusicPlayerContoller* _playBtn;
}
@property(retain, nonatomic) MMMusicPlayerContoller* playBtn;
@property(retain, nonatomic) UILabel* sourceLabel;
@property(retain, nonatomic) AttributeLabel* singerLabel;
@property(retain, nonatomic) AttributeLabel* titleLabel;
@property(retain, nonatomic) MMWebImageView* headImgView;
@property(retain, nonatomic) NSArray* keywordList;
@property(retain, nonatomic) BSBusinessContactItem* dataItem;
+(float)heightForItem;
-(void).cxx_destruct;
-(void)initView;
-(id)initWithContactServiceItem:(id)contactServiceItem andKeyWordList:(id)list;
-(void)dealloc;
@end

