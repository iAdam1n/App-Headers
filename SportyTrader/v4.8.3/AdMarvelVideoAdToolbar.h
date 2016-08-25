/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:02 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <UIKit/UIToolbar.h>

@class AdMarvelMovieViewToolBarItem, UIColor, NSNumber;

@interface AdMarvelVideoAdToolbar : UIToolbar {

	BOOL _adHasSepcifiedToolbarItems;
	BOOL _configureForInterstitial;
	AdMarvelMovieViewToolBarItem* _videoTimerToolbarItem;
	UIColor* _toolbarTintColor;
	id _toolbarItemsTarget;
	NSNumber* _videoDuration;

}

@property (nonatomic,retain) AdMarvelMovieViewToolBarItem * videoTimerToolbarItem;              //@synthesize videoTimerToolbarItem=_videoTimerToolbarItem - In the implementation block
@property (assign,nonatomic) UIColor * toolbarTintColor;                                        //@synthesize toolbarTintColor=_toolbarTintColor - In the implementation block
@property (assign,nonatomic) id toolbarItemsTarget;                                             //@synthesize toolbarItemsTarget=_toolbarItemsTarget - In the implementation block
@property (nonatomic,retain) NSNumber * videoDuration;                                          //@synthesize videoDuration=_videoDuration - In the implementation block
@property (assign,nonatomic) BOOL adHasSepcifiedToolbarItems;                                   //@synthesize adHasSepcifiedToolbarItems=_adHasSepcifiedToolbarItems - In the implementation block
@property (assign,nonatomic) BOOL configureForInterstitial;                                     //@synthesize configureForInterstitial=_configureForInterstitial - In the implementation block
-(void)enableItem:(BOOL)arg1 WithSelector:(SEL)arg2 ;
-(void)toggleItemWithSelector:(SEL)arg1 ;
-(void)doneToolbarItemTapped:(id)arg1 ;
-(UIColor *)toolbarTintColor;
-(id)returnFormattedTimeForVideoTimer:(int)arg1 withPrefix:(id)arg2 ;
-(void)updateVideoTimer:(int)arg1 withPrefix:(id)arg2 ;
-(AdMarvelMovieViewToolBarItem *)videoTimerToolbarItem;
-(BOOL)adHasSepcifiedToolbarItems;
-(BOOL)hasDoneButtonItem;
-(void)setToolbarItemsTarget:(id)arg1 ;
-(void)setVideoTimerToolbarItem:(AdMarvelMovieViewToolBarItem *)arg1 ;
-(void)setAdHasSepcifiedToolbarItems:(BOOL)arg1 ;
-(BOOL)configureForInterstitial;
-(id)toolbarItemsTarget;
-(void)replayToolbarItemTapped:(id)arg1 ;
-(void)openUrlToolbarItemTapped:(id)arg1 ;
-(void)muteToolbarItemTapped:(id)arg1 ;
-(void)unmuteToolbarItemTapped:(id)arg1 ;
-(void)playNewMovieToolbarItemTapped:(id)arg1 ;
-(void)stopToolbarItemTapped:(id)arg1 ;
-(void)pauseToolbarItemTapped:(id)arg1 ;
-(void)resumeToolbarItemTapped:(id)arg1 ;
-(void)setToolbarItemsFromDictionary:(id)arg1 ;
-(void)setToolbarTintColorFromDictionary:(id)arg1 ;
-(void)setTimerToolbarItemTextForVideoDuration:(id)arg1 ;
-(void)setConfigureForInterstitial:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)removeItem:(SEL)arg1 ;
-(void)setToolbarTintColor:(UIColor *)arg1 ;
-(NSNumber *)videoDuration;
-(void)setVideoDuration:(NSNumber *)arg1 ;
@end

