/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:52:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D57A2E05-BD0B-4E00-BA11-E75114DE004A/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <Tweetbot/PTHTweetbotStatusDetailChildController.h>
#import <UIKit/UIScrollViewDelegate.h>

@class NSArray, UIScrollView, UIPageControl, NSMutableArray, NSLayoutConstraint, NSString;

@interface PTHTweetbotStatusDetailMediaController : PTHTweetbotStatusDetailChildController <UIScrollViewDelegate> {

	NSArray* _loadedMedia;
	BOOL _isLoaded;
	UIScrollView* _scrollView;
	UIPageControl* _pageControl;
	NSArray* _mediaViews;
	NSMutableArray* _mediaViewsConstraints;
	NSLayoutConstraint* _heightConstraint;
	BOOL _scrollViewIsAnimating;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)statusWasUpdated;
-(void)_loadMedia;
-(void)_presentMedium:(id)arg1 ;
-(void)_pageControlChanged;
-(CGPoint)offsetForPage:(long long)arg1 ;
-(long long)pageForOffset:(CGPoint)arg1 ;
-(void)previewingStatusDidChange;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
@end

