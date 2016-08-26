/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:21 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNKeepUpSceneDelegate.h>

@protocol MNKeepUpGameDelegate;
@class MNSoccerScene;

@interface MNSoccerGame : NSObject <MNKeepUpSceneDelegate> {

	MNSoccerScene* _scene;
	long long _score;
	long long _scoreHash;
	BOOL _wasCheatDetected;
	id<MNKeepUpGameDelegate> _delegate;
	long long _bestScore;
	long long _attemptCount;
	long long _totalKickCount;

}

@property (assign,nonatomic,__weak) id<MNKeepUpGameDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long bestScore;                                 //@synthesize bestScore=_bestScore - In the implementation block
@property (nonatomic,readonly) long long attemptCount;                              //@synthesize attemptCount=_attemptCount - In the implementation block
@property (nonatomic,readonly) long long totalKickCount;                            //@synthesize totalKickCount=_totalKickCount - In the implementation block
@property (nonatomic,readonly) BOOL wasCheatDetected; 
-(void)_setScore:(long long)arg1 ;
-(BOOL)wasCheatDetected;
-(long long)_calculateScoreHash;
-(void)keepUpScene:(id)arg1 ballKickedAtX:(double)arg2 y:(double)arg3 ;
-(void)keepUpScene:(id)arg1 kickMissedAtX:(double)arg2 y:(double)arg3 ;
-(void)keepUpSceneBallDidWallBounce:(id)arg1 ;
-(void)keepUpScene:(id)arg1 ballFallingAtX:(double)arg2 ;
-(void)keepUpSceneBallDropped:(id)arg1 ;
-(id)initWithKeepUpScene:(id)arg1 ;
-(long long)totalKickCount;
-(void)setDelegate:(id<MNKeepUpGameDelegate>)arg1 ;
-(id<MNKeepUpGameDelegate>)delegate;
-(void)start;
-(long long)bestScore;
-(long long)attemptCount;
@end
