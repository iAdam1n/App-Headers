/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIControl.h>

@protocol TFNPageControlDelegate;
@class UIColor;

@interface TFNPageControl : UIControl {

	BOOL _hidesForSinglePage;
	BOOL _presenting;
	unsigned long long _currentPage;
	unsigned long long _numberOfPages;
	UIColor* _indicatorColorActivePage;
	UIColor* _indicatorColorInactivePage;
	UIColor* _shadowColor;
	double _indicatorDiameter;
	double _indicatorGap;
	id<TFNPageControlDelegate> _delegate;
	CGSize _shadowOffset;

}

@property (assign,nonatomic) unsigned long long currentPage;                          //@synthesize currentPage=_currentPage - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfPages;                        //@synthesize numberOfPages=_numberOfPages - In the implementation block
@property (assign,nonatomic) BOOL hidesForSinglePage;                                 //@synthesize hidesForSinglePage=_hidesForSinglePage - In the implementation block
@property (assign,getter=isPresenting,nonatomic) BOOL presenting;                     //@synthesize presenting=_presenting - In the implementation block
@property (nonatomic,retain) UIColor * indicatorColorActivePage;                      //@synthesize indicatorColorActivePage=_indicatorColorActivePage - In the implementation block
@property (nonatomic,retain) UIColor * indicatorColorInactivePage;                    //@synthesize indicatorColorInactivePage=_indicatorColorInactivePage - In the implementation block
@property (nonatomic,retain) UIColor * shadowColor;                                   //@synthesize shadowColor=_shadowColor - In the implementation block
@property (assign,nonatomic) CGSize shadowOffset;                                     //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (assign,nonatomic) double indicatorDiameter;                                //@synthesize indicatorDiameter=_indicatorDiameter - In the implementation block
@property (assign,nonatomic) double indicatorGap;                                     //@synthesize indicatorGap=_indicatorGap - In the implementation block
@property (assign,nonatomic,__weak) id<TFNPageControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double indicatorsTotalWidth; 
-(void)presentFromBelow;
-(void)setIndicatorColorInactivePage:(UIColor *)arg1 ;
-(void)setIndicatorColorActivePage:(UIColor *)arg1 ;
-(void)setIndicatorDiameter:(double)arg1 ;
-(void)setIndicatorGap:(double)arg1 ;
-(double)indicatorsTotalWidth;
-(void)_updateIsHidden;
-(UIColor *)indicatorColorActivePage;
-(UIColor *)indicatorColorInactivePage;
-(double)indicatorDiameter;
-(double)indicatorGap;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id<TFNPageControlDelegate>)arg1 ;
-(id<TFNPageControlDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setShadowColor:(UIColor *)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(void)sizeToFit;
-(CGSize)shadowOffset;
-(UIColor *)shadowColor;
-(void)setPresenting:(BOOL)arg1 ;
-(void)setNumberOfPages:(unsigned long long)arg1 ;
-(void)setCurrentPage:(unsigned long long)arg1 ;
-(unsigned long long)numberOfPages;
-(unsigned long long)currentPage;
-(void)setHidesForSinglePage:(BOOL)arg1 ;
-(BOOL)hidesForSinglePage;
-(BOOL)isPresenting;
@end
