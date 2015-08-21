/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:33 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, TFNPageControl, UIImageView, CAGradientLayer, NSString;

@interface T1SwipeTitleView : UIView {

	BOOL _initializedSwipePercent;
	UILabel* _currentLabel;
	UILabel* _onDeckLabel;
	TFNPageControl* _pageControl;
	UIImageView* _logoView;
	CAGradientLayer* _fadeGradientLayer;
	NSString* _onDeckTitle;
	NSString* _currentTitle;
	double _swipePercent;

}

@property (nonatomic,copy) NSString * onDeckTitle;                              //@synthesize onDeckTitle=_onDeckTitle - In the implementation block
@property (nonatomic,copy) NSString * currentTitle;                             //@synthesize currentTitle=_currentTitle - In the implementation block
@property (assign,nonatomic) double swipePercent;                               //@synthesize swipePercent=_swipePercent - In the implementation block
@property (assign,getter=arePipsHidden,nonatomic) BOOL pipsHidden; 
-(double)_onDeckAlpha;
-(double)_currentAlpha;
-(void)setOnDeckTitle:(NSString *)arg1 ;
-(void)setCurrentTitle:(NSString *)arg1 ;
-(void)setSwipePercent:(double)arg1 ;
-(void)setNumberOfPanels:(unsigned long long)arg1 ;
-(void)setCurrentPanelIndex:(unsigned long long)arg1 ;
-(void)setPipsHidden:(BOOL)arg1 ;
-(BOOL)arePipsHidden;
-(NSString *)onDeckTitle;
-(double)swipePercent;
-(void)_layoutLabels;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(NSString *)currentTitle;
@end

