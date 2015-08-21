/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:43 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNTwitterAVDockableHandler.h>
#import <Twitter/TFNTwitterAVManagerAudioDelegate.h>

@class NSMutableDictionary, TFNTwitterAudioPlayer, NSString, TFNDataViewController;

@interface TFNTwitterAVAudioHandler : TFNTwitterAVDockableHandler <TFNTwitterAVManagerAudioDelegate> {

	NSMutableDictionary* _anonymizedUserIds;
	TFNTwitterAudioPlayer* _audioPlayer;

}

@property (nonatomic,retain) TFNTwitterAudioPlayer * audioPlayer;                                  //@synthesize audioPlayer=_audioPlayer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<TFNTwitterAVPlayerController> currentPlayer; 
@property (assign,nonatomic,__weak) TFNDataViewController * presentingViewController; 
-(id)anonymizedUserIdForPartner:(id)arg1 withAccount:(id)arg2 configuration:(id)arg3 ;
-(void)disposeCurrentPlayer;
-(id)playAudioPlaylist:(id)arg1 withDelegate:(id)arg2 configuration:(id)arg3 actionHandler:(id)arg4 account:(id)arg5 status:(id)arg6 scribeBaseParameters:(id)arg7 partner:(id)arg8 fromViewController:(id)arg9 previewView:(id)arg10 ;
-(BOOL)disposeCurrentPlayerBecauseModalPresented;
-(id)_computeAnonymizedUserIdForPartner:(id)arg1 withAccount:(id)arg2 configuration:(id)arg3 ;
-(id)_computeAnonymizedUserIdWithSalt:(id)arg1 userId:(long long)arg2 ;
-(void)invalidateAnonymizedUserIds;
-(TFNTwitterAudioPlayer *)audioPlayer;
-(void)setAudioPlayer:(TFNTwitterAudioPlayer *)arg1 ;
-(id<TFNTwitterAVPlayerController>)currentPlayer;
@end

