/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"


@interface WXTalkComponent : XXUnknownSuperclass {
	WXTalkEngineAdapter* _engineAdapter;
	IMultiTalkMgr* _wxTalkEngine;
}
@property(assign, nonatomic) IMultiTalkMgr* wxTalkEngine;
@property(assign, nonatomic) WXTalkEngineAdapter* engineAdapter;
-(void)dealloc;
-(void)getLocalCapInfo:(void**)info capInfoLen:(int*)len forNetType:(int)netType;
-(id)init;
@end
