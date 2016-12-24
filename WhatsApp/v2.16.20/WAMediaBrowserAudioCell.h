/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:47 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WAMediaBrowserCollectionViewCell.h>
#import <WhatsApp/WAMediaPlayerTransportControlViewDelegate.h>

@class WAMediaPlayerTransportControlView, UIImageView, WAPttPlayer, NSString;

@interface WAMediaBrowserAudioCell : WAMediaBrowserCollectionViewCell <WAMediaPlayerTransportControlViewDelegate> {

	WAMediaPlayerTransportControlView* _playerTransportBar;
	UIImageView* _audioOnlyImageView;
	WAPttPlayer* _player;
	BOOL _ignoreProgressChange;

}

@property (assign,getter=isAudioPlayerPaused,nonatomic) BOOL audioPlayerPaused; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)supportsFullScreenPresentation;
-(void)setAccessibilityLabelForContent:(id)arg1 ;
-(void)applicationWillPresentCallScreen:(id)arg1 ;
-(void)layoutSubviewsInCell;
-(void)didChangeMessage;
-(void)mediaPlayerTransportControlViewDidBeginScrubbing:(id)arg1 ;
-(void)mediaPlayerTransportControlViewDidEndScrubbing:(id)arg1 ;
-(void)mediaPlayerTransportControlViewDidChangeCurrentTime:(id)arg1 ;
-(void)setAudioPlayerPaused:(BOOL)arg1 ;
-(BOOL)isAudioPlayerPaused;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)prepareForReuse;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(long long)presentationState;
-(void)setPresentationState:(long long)arg1 ;
@end
