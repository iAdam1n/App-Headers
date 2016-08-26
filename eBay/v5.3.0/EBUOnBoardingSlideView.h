/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/EBUAccessibilityGroup.h>

@class UIImageView, EUIView, EUILabel, NSLayoutConstraint;

@interface EBUOnBoardingSlideView : EBUAccessibilityGroup {

	BOOL _isSlideVisible;
	long long _onBoardingSizeClass;
	UIImageView* _contentImage;
	EUIView* _contentTitleContainer;
	EUILabel* _contentTitleLabel;
	EUILabel* _contentTextLabel;
	NSLayoutConstraint* _contentTitleVerticalPin;
	NSLayoutConstraint* _contentTextVerticalPin;

}

@property (assign,nonatomic) long long onBoardingSizeClass;                             //@synthesize onBoardingSizeClass=_onBoardingSizeClass - In the implementation block
@property (assign,nonatomic) BOOL isSlideVisible;                                       //@synthesize isSlideVisible=_isSlideVisible - In the implementation block
@property (nonatomic,retain) UIImageView * contentImage;                                //@synthesize contentImage=_contentImage - In the implementation block
@property (nonatomic,retain) EUIView * contentTitleContainer;                           //@synthesize contentTitleContainer=_contentTitleContainer - In the implementation block
@property (nonatomic,retain) EUILabel * contentTitleLabel;                              //@synthesize contentTitleLabel=_contentTitleLabel - In the implementation block
@property (nonatomic,retain) EUILabel * contentTextLabel;                               //@synthesize contentTextLabel=_contentTextLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentTitleVerticalPin;              //@synthesize contentTitleVerticalPin=_contentTitleVerticalPin - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentTextVerticalPin;               //@synthesize contentTextVerticalPin=_contentTextVerticalPin - In the implementation block
-(void)setOnBoardingSizeClass:(long long)arg1 ;
-(long long)onBoardingSizeClass;
-(id)initWithLayoutSizeClass:(long long)arg1 ;
-(EUIView *)contentTitleContainer;
-(EUILabel *)contentTitleLabel;
-(void)updateScrollEffectsForOffset:(double)arg1 visiblePercent:(double)arg2 ;
-(BOOL)isSlideVisible;
-(void)slideWillAppear;
-(void)setIsSlideVisible:(BOOL)arg1 ;
-(void)slideDidDisappear;
-(void)slideDidAppear;
-(void)slideWillDisappear;
-(void)setContentTitleContainer:(EUIView *)arg1 ;
-(void)setContentTitleLabel:(EUILabel *)arg1 ;
-(EUILabel *)contentTextLabel;
-(void)setContentTextLabel:(EUILabel *)arg1 ;
-(NSLayoutConstraint *)contentTitleVerticalPin;
-(void)setContentTitleVerticalPin:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)contentTextVerticalPin;
-(void)setContentTextVerticalPin:(NSLayoutConstraint *)arg1 ;
-(UIImageView *)contentImage;
-(void)setContentImage:(UIImageView *)arg1 ;
@end
