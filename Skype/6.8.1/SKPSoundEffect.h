//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKPAudioPlayerDelegate.h"
#import "SKPAudioSessionManagerClient.h"

@class NSDate, NSString, SKPActivityToken, SKPAudioPlayer;

@interface SKPSoundEffect : NSObject <SKPAudioPlayerDelegate, SKPAudioSessionManagerClient>
{
    _Bool _loop;
    _Bool _wasPaused;
    _Bool _wasStopped;
    _Bool _isStopped;
    long long _type;
    long long _activityType;
    id <NSObject> _client;
    NSDate *_expiryDate;
    CDUnknownBlockType _preparation;
    CDUnknownBlockType _interruption;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _localCompletion;
    SKPAudioPlayer *_player;
    SKPActivityToken *_activity;
    long long _stopReason;
}

+ (id)errorWithCode:(unsigned long long)arg1;
@property(nonatomic) _Bool isStopped; // @synthesize isStopped=_isStopped;
@property(nonatomic) _Bool wasStopped; // @synthesize wasStopped=_wasStopped;
@property(nonatomic) _Bool wasPaused; // @synthesize wasPaused=_wasPaused;
@property(nonatomic) long long stopReason; // @synthesize stopReason=_stopReason;
@property(retain, nonatomic) SKPActivityToken *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) SKPAudioPlayer *player; // @synthesize player=_player;
@property(copy, nonatomic) CDUnknownBlockType localCompletion; // @synthesize localCompletion=_localCompletion;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) CDUnknownBlockType interruption; // @synthesize interruption=_interruption;
@property(copy, nonatomic) CDUnknownBlockType preparation; // @synthesize preparation=_preparation;
@property(retain, nonatomic) NSDate *expiryDate; // @synthesize expiryDate=_expiryDate;
@property(retain, nonatomic) id <NSObject> client; // @synthesize client=_client;
@property(readonly, nonatomic) long long activityType; // @synthesize activityType=_activityType;
@property(readonly, nonatomic) _Bool loop; // @synthesize loop=_loop;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)audioPlayerEndInterruption:(id)arg1;
- (void)audioPlayerEndInterruption:(id)arg1 withFlags:(unsigned long long)arg2;
- (void)audioPlayerEndInterruption:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)audioPlayerBeginInterruption:(id)arg1;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)playingStoppedWithReason:(long long)arg1 error:(id)arg2;
- (void)playWithCompletion:(CDUnknownBlockType)arg1;
- (void)stopWithReason:(long long)arg1;
- (id)audioSessionSettings;
- (id)prettyReason;
- (id)prettyName;
- (void)dealloc;
- (id)initWithType:(long long)arg1 loop:(_Bool)arg2 activity:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
