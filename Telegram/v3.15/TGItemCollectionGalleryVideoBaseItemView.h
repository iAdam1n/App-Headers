/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:32 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TGModernGalleryZoomableItemView.h>

@protocol MediaResource;
@class TGModernButton, TGModernGalleryVideoPlayerView, TGModernGalleryVideoScrubbingInterfaceView, TGMessageImageViewOverlayView, TGModernGalleryVideoFooterView, MediaResourceStatus, ResourceData, SMetaDisposable;

@interface TGItemCollectionGalleryVideoBaseItemView : TGModernGalleryZoomableItemView {

	TGModernButton* _actionButton;
	TGModernGalleryVideoPlayerView* _playerView;
	TGModernGalleryVideoScrubbingInterfaceView* _scrubbingInterfaceView;
	BOOL _playerViewDetached;
	CGSize _videoDimensions;
	TGMessageImageViewOverlayView* _progressView;
	TGModernGalleryVideoFooterView* _footerView;
	id<MediaResource> _resource;
	MediaResourceStatus* _resourceStatus;
	ResourceData* _resourceData;
	BOOL _autoplayAfterDownload;
	unsigned long long _currentLoopCount;
	SMetaDisposable* _stateDisposable;
	BOOL _scrubbing;
	BOOL _switchingToPIP;
	SMetaDisposable* _resourceStatusDisposable;
	SMetaDisposable* _resourceDataDisposable;
	SMetaDisposable* _resourceFetchDisposable;
	BOOL _keepProgressHidden;

}
-(void)setItem:(id)arg1 synchronously:(BOOL)arg2 ;
-(void)prepareForRecycle;
-(CGRect)transitionViewContentRect;
-(void)_initializePlayerWithMedia:(id)arg1 synchronously:(BOOL)arg2 ;
-(void)_subscribeToStateOfPlayerView:(id)arg1 ;
-(void)setDefaultFooterHidden:(BOOL)arg1 ;
-(void)setIsVisible:(BOOL)arg1 ;
-(void)_willPlay;
-(void)_configurePlayerView;
-(BOOL)shouldLoopVideo:(unsigned long long)arg1 ;
-(void)loadAndPlay;
-(void)hidePlayButton;
-(void)showPlayButton;
-(void)stopForOutTransition;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)contentSize;
-(id)contentView;
-(void)dealloc;
-(void)stop;
-(id)transitionView;
-(id)headerView;
-(void)play;
-(id)footerView;
-(void)pause;
-(void)updateInterface;
-(void)setFocused:(BOOL)arg1 ;
-(id)_playerView;
@end
