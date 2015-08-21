/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:29 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/T1ResizableHeaderViewController.h>
#import <Twitter/TFNLayoutMetricsEnvironment.h>

@class TFNTwitterComposition, TFNPullToRefreshControl, T1NewEventHeaderView, NSString;

@interface T1NewEventContainerHeaderViewController : T1ResizableHeaderViewController <TFNLayoutMetricsEnvironment> {

	TFNTwitterComposition* _tweetComposition;

}

@property (assign,nonatomic,__weak) id<T1NewEventContainerHeaderViewControllerDelegate><T1ResizableHeaderViewControllerDelegate> delegate; 
@property (assign,nonatomic) BOOL shouldShowBackButton; 
@property (assign,nonatomic) BOOL pullToLoadTopEnabled; 
@property (nonatomic,readonly) TFNPullToRefreshControl * pullToRefreshControl; 
@property (nonatomic,retain) TFNTwitterComposition * tweetComposition;                                                                                  //@synthesize tweetComposition=_tweetComposition - In the implementation block
@property (nonatomic,retain) T1NewEventHeaderView * headerView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)scribePage;
-(void)setTweetComposition:(TFNTwitterComposition *)arg1 ;
-(id)scribeSection;
-(void)setPullToLoadTopEnabled:(BOOL)arg1 ;
-(BOOL)pullToLoadTopEnabled;
-(void)resizableHeaderViewDidTapBannerImage:(id)arg1 ;
-(void)resizableHeaderViewDidTapComposeButton:(id)arg1 ;
-(void)resizableHeaderViewDidLongPressComposeButton:(id)arg1 ;
-(void)resizableHeaderViewDidTapBackButton:(id)arg1 ;
-(TFNPullToRefreshControl *)pullToRefreshControl;
-(void)setShouldShowBackButton:(BOOL)arg1 ;
-(BOOL)shouldShowBackButton;
-(TFNTwitterComposition *)tweetComposition;
-(id)init;
@end

