/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface VOIPStatHelper : XXUnknownSuperclass {
}
+(id)GenAVQualityExtLog:(tagAVQualityReportInfo*)log extAVReport:(NewAVExtReport_t*)report;
+(id)GetChannelLog:(tagDirectReport*)log withRelayReport:(tagRelayReport*)relayReport withDirectReportV2:(NewDirectReport*)directReportV2 withRelayReportV2:(NewRelayReport*)relayReportV2 withDialReport:(tagDialReport*)dialReport;
+(id)GetChannelTcpLog:(RelayTcpReport*)log tcpSwitchCnt:(unsigned)cnt withDialReport:(tagDialReport*)dialReport withRelayReportV2:(NewRelayReport*)relayReportV2;
+(id)GenAVQualityLog:(tagAVQualityReportInfo*)log extAVReport:(NewAVExtReport_t*)report androidReport:(AndroidReport_t*)report3;
+(id)GenNewDialLog:(NewDialReport_t*)log androidReport:(AndroidReport_t*)report;
+(id)GenExtLog:(ExtReport_t*)log withQual:(tagAVQualityReportInfo)qual;
+(id)GenQualityLog:(tagAVQualityReportInfo*)log;
+(id)GenDirectLog:(tagDirectReport*)log;
+(id)GenRelayLog:(tagRelayReport*)log;
+(id)GenDialLog:(tagDialReport*)log;
@end

