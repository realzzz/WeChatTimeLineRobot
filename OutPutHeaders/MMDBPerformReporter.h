/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "crashReportConnectionDelegate.h"

@class MMCrashReportConnection, NSMutableArray, NSObject, NSString, MMDBPerformRecordStatus;
@protocol MMDBPerformReporterDelegate, OS_dispatch_queue;

@interface MMDBPerformReporter : XXUnknownSuperclass <crashReportConnectionDelegate> {
	MMCrashReportConnection* m_connection;
	NSString* m_recordStatusPath;
	MMDBPerformRecordStatus* m_recordStatus;
	NSString* m_recordPath;
	unsigned m_recordFileSize;
	NSString* m_reportStatusPath;
	NSMutableArray* m_arrReportTime;
	BOOL m_hasCreateDataDir;
	id<MMDBPerformReporterDelegate> m_delegate;
	NSObject<OS_dispatch_queue>* m_workerQueue;
	NSString* m_userName;
	unsigned m_maxTimeToTiggerReport;
	unsigned m_maxReportSize;
	unsigned m_maxReportCount;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign) unsigned m_maxReportCount;
@property(assign) unsigned m_maxReportSize;
@property(assign) unsigned m_maxTimeToTiggerReport;
@property(retain) NSString* m_userName;
@property(retain, nonatomic) NSObject<OS_dispatch_queue>* m_workerQueue;
@property(assign, nonatomic) __weak id<MMDBPerformReporterDelegate> m_delegate;
-(void).cxx_destruct;
-(void)onUploadCrashCompleted:(BOOL)completed CrashWrap:(id)wrap;
-(void)onReportFail;
-(void)onReportSuccess;
-(id)currentUserName;
-(void)reportSQLRecord:(id)record;
-(void)callbackExceedMaxReportCount;
-(void)addReportTime;
-(void)loadReportStatus;
-(BOOL)isExceedReportCount;
-(BOOL)removeRecordStatusFile;
-(BOOL)removeRecordFile;
-(id)loadRecordFile;
-(void)reportToServerWithSQLRecord:(id)sqlrecord;
-(void)renewFirstRecordTime;
-(void)addSQLRecordToFile:(id)file;
-(BOOL)isExceedMaxRecordSize:(id)size;
-(BOOL)isExceedMaxReportTime;
-(BOOL)isNeedReport:(id)report;
-(void)loadRecordFileSize;
-(void)loadRecordStatus;
-(void)perpareDataDir;
-(id)convertPerformanceToSQLRecord:(id)sqlrecord;
-(void)InputPerformance:(id)performance;
-(id)init;
@end
