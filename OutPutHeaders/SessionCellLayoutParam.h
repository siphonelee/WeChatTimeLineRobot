/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"


@interface SessionCellLayoutParam : XXUnknownSuperclass {
	float cellHeight;
	float headImgLeftMargin;
	float headImgTopMargin;
	float nameLabelTopMargin;
	float nameLabelBottomMargin;
	float nameLabelLeftMargin;
	float nameLabelHeight;
	float statusImgRightMargin;
	float timeLabelRightMargin;
	float chatNotPushViewRightMargin;
	CGSize headImgSize;
}
@property(assign, nonatomic) float chatNotPushViewRightMargin;
@property(assign, nonatomic) float timeLabelRightMargin;
@property(assign, nonatomic) float statusImgRightMargin;
@property(assign, nonatomic) CGSize headImgSize;
@property(assign, nonatomic) float nameLabelHeight;
@property(assign, nonatomic) float nameLabelLeftMargin;
@property(assign, nonatomic) float nameLabelBottomMargin;
@property(assign, nonatomic) float nameLabelTopMargin;
@property(assign, nonatomic) float headImgTopMargin;
@property(assign, nonatomic) float headImgLeftMargin;
@property(assign, nonatomic) float cellHeight;
+(id)defaultSessionCellLayoutParam;
+(id)layoutParamForCellStyle:(id)cellStyle expectedHeight:(float)height;
+(id)layoutParamForCellStyle:(id)cellStyle;
@end

