/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol MMPieChartDataSource <NSObject>
-(float)pieChart:(id)chart valueForPieAtIndex:(unsigned)index;
-(unsigned)numberOfPiesInChart:(id)chart;
@optional
-(float)pieChart:(id)chart radiuForPieAtIndex:(unsigned)index;
-(id)pieChart:(id)chart colorForPieAtIndex:(unsigned)index;
@end

