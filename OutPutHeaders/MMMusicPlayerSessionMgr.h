/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "IRemoteControlCheckExt.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface MMMusicPlayerSessionMgr : XXUnknownSuperclass <IRemoteControlCheckExt> {
}
+(id)sharedMusicPlayerSessionMgr;
-(void)setNeedRestartMusicByOthers:(BOOL)others;
-(void)iRemoteControlCheckShouldPrevTrack;
-(void)iRemoteControlCheckShouldNextTrack;
-(void)iRemoteControlCheckShouldStop;
-(void)iRemoteControlCheckShouldPause;
-(void)iRemoteControlCheckShouldPlay;
-(void)notifyPlayStateChange:(id)change;
-(void)endMusicPlayerAudioSession:(id)session;
-(void)beginMusicPlayerAudioSession:(id)session;
-(void)dealloc;
-(id)init;
@end

