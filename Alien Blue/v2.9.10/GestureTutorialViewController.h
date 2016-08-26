/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/AlienBlue-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>

@class NSMutableArray, NSArray, UIScrollView, UIPageControl, NSString;

@interface GestureTutorialViewController : UIViewController <UIScrollViewDelegate> {

	NSMutableArray* _sheets;
	NSArray* _sheetImageViews;
	UIScrollView* _scrollView;
	UIPageControl* _pageControl;

}

@property (retain) NSMutableArray * sheets;                         //@synthesize sheets=_sheets - In the implementation block
@property (retain) NSArray * sheetImageViews;                       //@synthesize sheetImageViews=_sheetImageViews - In the implementation block
@property (retain) UIScrollView * scrollView;                       //@synthesize scrollView=_scrollView - In the implementation block
@property (retain) UIPageControl * pageControl;                     //@synthesize pageControl=_pageControl - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)imageViewForSheet:(id)arg1 ;
-(void)setSheets:(NSMutableArray *)arg1 ;
-(NSMutableArray *)sheets;
-(void)setSheetImageViews:(NSArray *)arg1 ;
-(NSArray *)sheetImageViews;
-(id)init;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(void)loadView;
-(void)close;
-(UIPageControl *)pageControl;
-(void)setPageControl:(UIPageControl *)arg1 ;
@end
