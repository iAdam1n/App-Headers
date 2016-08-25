/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/BrowserViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class BrowserHeaderView_iPad, BrowserFooterView_iPad, NSString;

@interface BrowserViewController_iPad : BrowserViewController <UIGestureRecognizerDelegate> {

	BrowserHeaderView_iPad* _headerView;
	BrowserFooterView_iPad* _footerView;

}

@property (retain) BrowserHeaderView_iPad * headerView;              //@synthesize headerView=_headerView - In the implementation block
@property (retain) BrowserFooterView_iPad * footerView;              //@synthesize footerView=_footerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)configureContentViewForImageIfNecessary;
-(void)applyImageGestureRecognizers;
-(id)focusMediaView;
-(void)didTapImage:(id)arg1 ;
-(void)didPinchImage:(id)arg1 ;
-(void)showOptimisedImageInFullscreen;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)handleStatusBarDisplayOrHidingIfNecessary;
-(void)userDidTapOnLinkToPost:(id)arg1 ;
-(void)userDidTapOnSubredditLink:(id)arg1 ;
-(void)userDidTapOnUserLink:(id)arg1 ;
-(void)userDidTapOnExternalLink:(id)arg1 ;
-(void)setShowOptimal:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)userDidSwitchOptimalToggle;
-(void)contentOptimizerDidFail:(id)arg1 ;
-(id)postDictionary;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(BrowserHeaderView_iPad *)headerView;
-(void)setHeaderView:(BrowserHeaderView_iPad *)arg1 ;
-(BrowserFooterView_iPad *)footerView;
-(void)setFooterView:(BrowserFooterView_iPad *)arg1 ;
-(double)pageWidth;
@end

