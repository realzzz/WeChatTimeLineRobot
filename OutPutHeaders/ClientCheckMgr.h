/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "IMsgExt.h"
#import "MMService.h"

@class NSLock, NSString, NSMutableSet;

@interface ClientCheckMgr : MMService <IMsgExt, MMService> {
	NSLock* _lock;
	NSMutableSet* _setImageList;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(id)runningProcesses;
-(id)arrToString:(id)string;
-(void)addImage:(const char*)image;
-(void)OnGetNewXmlMsg:(id)msg Type:(id)type MsgWrap:(id)wrap;
-(void)reportAppList:(id)list;
-(void)checkHook:(id)hook;
-(void)reportFileConsistency:(id)consistency fileName:(id)name offset:(unsigned)offset bufferSize:(unsigned)size seq:(unsigned)seq;
-(void)checkConsistency:(id)consistency;
-(void)registerAddImageCallBack;
-(void)test;
-(void)onServiceInit;
-(void)dealloc;
-(id)init;
@end
