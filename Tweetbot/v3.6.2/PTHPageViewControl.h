/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:06:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/ECBB6493-3CD3-4031-8AE5-B625F29152BF/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <UIKit/UIControl.h>

@class NSArray, UIColor, NSString;

@interface PTHPageViewControl : UIControl {

	NSArray* _indicatorViews;
	BOOL _hidesForSinglePage;
	long long _currentPage;
	NSArray* _indicatorImages;
	UIColor* _pageIndicatorTintColor;
	NSString* _pageIndicatorTintColorName;
	UIColor* _currentPageIndicatorTintColor;
	NSString* _currentPageIndicatorTintColorName;
	UIOffset _indicatorOffset;

}

@property (assign,nonatomic) long long currentPage;                                     //@synthesize currentPage=_currentPage - In the implementation block
@property (nonatomic,readonly) long long numberOfPages; 
@property (nonatomic,copy) NSArray * indicatorImages;                                   //@synthesize indicatorImages=_indicatorImages - In the implementation block
@property (assign,nonatomic) BOOL hidesForSinglePage;                                   //@synthesize hidesForSinglePage=_hidesForSinglePage - In the implementation block
@property (nonatomic,retain) UIColor * pageIndicatorTintColor;                          //@synthesize pageIndicatorTintColor=_pageIndicatorTintColor - In the implementation block
@property (nonatomic,retain) NSString * pageIndicatorTintColorName;                     //@synthesize pageIndicatorTintColorName=_pageIndicatorTintColorName - In the implementation block
@property (nonatomic,retain) UIColor * currentPageIndicatorTintColor;                   //@synthesize currentPageIndicatorTintColor=_currentPageIndicatorTintColor - In the implementation block
@property (nonatomic,retain) NSString * currentPageIndicatorTintColorName;              //@synthesize currentPageIndicatorTintColorName=_currentPageIndicatorTintColorName - In the implementation block
@property (assign,nonatomic) UIOffset indicatorOffset;                                  //@synthesize indicatorOffset=_indicatorOffset - In the implementation block
-(void)colorThemeDidChange;
-(void)switchPageIfNeeded:(id)arg1 event:(id)arg2 ;
-(void)_updateTint;
-(void)setIndicatorImages:(NSArray *)arg1 ;
-(void)setCurrentPageIndicatorTintColorName:(NSString *)arg1 ;
-(void)setPageIndicatorTintColorName:(NSString *)arg1 ;
-(NSArray *)indicatorImages;
-(NSString *)pageIndicatorTintColorName;
-(NSString *)currentPageIndicatorTintColorName;
-(UIOffset)indicatorOffset;
-(void)setIndicatorOffset:(UIOffset)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)intrinsicContentSize;
-(void)setCurrentPage:(long long)arg1 ;
-(void)setCurrentPageIndicatorTintColor:(UIColor *)arg1 ;
-(void)setPageIndicatorTintColor:(UIColor *)arg1 ;
-(long long)numberOfPages;
-(long long)currentPage;
-(void)setHidesForSinglePage:(BOOL)arg1 ;
-(BOOL)hidesForSinglePage;
-(UIColor *)currentPageIndicatorTintColor;
-(UIColor *)pageIndicatorTintColor;
@end

