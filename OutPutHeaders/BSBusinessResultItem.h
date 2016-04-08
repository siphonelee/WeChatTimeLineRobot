/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class BSBusinessCommonItem, BSBusinessProductItem, BSBusinessContactItem;

@interface BSBusinessResultItem : XXUnknownSuperclass {
	unsigned long _type;
	BSBusinessContactItem* _contactItem;
	BSBusinessCommonItem* _commonItem;
	BSBusinessProductItem* _productItem;
	unsigned long long _docId;
}
@property(retain, nonatomic) BSBusinessProductItem* productItem;
@property(retain, nonatomic) BSBusinessCommonItem* commonItem;
@property(retain, nonatomic) BSBusinessContactItem* contactItem;
@property(assign, nonatomic) unsigned long long docId;
@property(assign, nonatomic) unsigned long type;
+(id)fromServerObj:(id)serverObj;
-(void).cxx_destruct;
-(void)dealloc;
@end

