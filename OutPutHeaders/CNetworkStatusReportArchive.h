/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface CNetworkStatusReportArchive : XXUnknownSuperclass {
	NSString* m_nsGetDataTime;
	NSString* m_nsDisconnectedCountWifi;
	NSString* m_nsDisconnectedCountNoWifi;
	NSString* m_nsIpxx;
	NSString* m_nsLongUnConnectCount;
}
@property(retain, nonatomic) NSString* m_nsLongUnConnectCount;
@property(retain, nonatomic) NSString* m_nsIpxx;
@property(retain, nonatomic) NSString* m_nsDisconnectedCountNoWifi;
@property(retain, nonatomic) NSString* m_nsDisconnectedCountWifi;
@property(retain, nonatomic) NSString* m_nsGetDataTime;
-(void).cxx_destruct;
-(void)zeroAllReport;
-(void)zeroIpxx;
-(void)zeroLongUnConnectCount;
-(void)zeroDisconnectedCount;
-(void)zeroGetDataTime;
-(void)addIpxx:(id)ipxx;
-(void)addLongUnConnectCount;
-(void)addDisconnnectedCountNoWifi;
-(void)addDisconnnectedCountWifi;
-(void)addGetDataTime:(unsigned long)time;
-(BOOL)hasReportData;
-(id)init;
@end
