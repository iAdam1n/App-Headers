/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:45 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/JMGalleryViewController.h>

@interface FullscreenGalleryController_iPad : JMGalleryViewController {

	BOOL _statusBarShouldShowAfterDismiss;
	unsigned long long _startingIndex;

}

@property (assign) unsigned long long startingIndex;                  //@synthesize startingIndex=_startingIndex - In the implementation block
@property (readonly) BOOL singlePhotoMode; 
@property (assign) BOOL statusBarShouldShowAfterDismiss;              //@synthesize statusBarShouldShowAfterDismiss=_statusBarShouldShowAfterDismiss - In the implementation block
-(void)setStartingIndex:(unsigned long long)arg1 ;
-(id)initWithGalleryItems:(id)arg1 startingAtIndex:(unsigned long long)arg2 ;
-(BOOL)singlePhotoMode;
-(unsigned long long)startingIndex;
-(void)setStatusBarShouldShowAfterDismiss:(BOOL)arg1 ;
-(BOOL)statusBarShouldShowAfterDismiss;
-(id)interactionToolbarView;
-(void)showSharingOptionsForCurrentGalleryItem;
-(void)handleSwipeUpward:(id)arg1 ;
-(void)handleSwipeDownward:(id)arg1 ;
-(id)initWithImageUrls:(id)arg1 startingAtIndex:(unsigned long long)arg2 ;
-(BOOL)showsCaptions;
-(BOOL)hidesStatusBarAndNavigationBarWhenPresented;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)dismiss;
@end

