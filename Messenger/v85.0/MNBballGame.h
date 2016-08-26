/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:22 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/BballSceneDelegate.h>

@protocol BballGameDelegate;
@class MNBballScene;

@interface MNBballGame : NSObject <BballSceneDelegate> {

	MNBballScene* _scene;
	BOOL _scored;
	long long _score;
	long long _scorePlus1000;
	BOOL _wasCheatDetected;
	id<BballGameDelegate> _delegate;
	long long _bestScore;
	long long _attemptCount;

}

@property (assign,nonatomic,__weak) id<BballGameDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long bestScore;                              //@synthesize bestScore=_bestScore - In the implementation block
@property (nonatomic,readonly) long long attemptCount;                           //@synthesize attemptCount=_attemptCount - In the implementation block
@property (nonatomic,readonly) BOOL wasCheatDetected;                            //@synthesize wasCheatDetected=_wasCheatDetected - In the implementation block
-(void)_setScore:(long long)arg1 ;
-(BOOL)wasCheatDetected;
-(void)bballSceneBallIsReady:(id)arg1 ;
-(void)bballSceneBallThrown:(id)arg1 ;
-(void)bballSceneBallHitRim:(id)arg1 ;
-(void)bballSceneMissedShot:(id)arg1 ;
-(void)bballSceneScored:(id)arg1 ;
-(void)bballSceneThrowFinished:(id)arg1 ;
-(id)initWithBballScene:(id)arg1 ;
-(void)setDelegate:(id<BballGameDelegate>)arg1 ;
-(id<BballGameDelegate>)delegate;
-(void)start;
-(long long)bestScore;
-(long long)attemptCount;
@end
