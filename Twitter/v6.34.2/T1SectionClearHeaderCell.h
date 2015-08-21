/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:27 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/T1SectionHeaderCell.h>

@protocol T1SectionClearDelegate;
@class T1ClearButtonGestureRecognizer, UILabel, T1ClearButton, UIImage;

@interface T1SectionClearHeaderCell : T1SectionHeaderCell {

	BOOL _clearButtonActive;
	double _labelWidthLocalized;
	T1ClearButtonGestureRecognizer* _gestureRecognizer;
	BOOL _animating;
	id<T1SectionClearDelegate> _delegate;
	UILabel* _buttonLabel;
	T1ClearButton* _clearButton;
	UIImage* _xImage;

}

@property (assign,nonatomic,__weak) id<T1SectionClearDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isAnimating,nonatomic) BOOL animating;                       //@synthesize animating=_animating - In the implementation block
@property (nonatomic,readonly) UILabel * buttonLabel;                                 //@synthesize buttonLabel=_buttonLabel - In the implementation block
@property (nonatomic,readonly) T1ClearButton * clearButton;                           //@synthesize clearButton=_clearButton - In the implementation block
@property (nonatomic,readonly) UIImage * xImage;                                      //@synthesize xImage=_xImage - In the implementation block
-(void)layoutMetricsDidChange:(id)arg1 ;
-(void)_legacyLayoutSubviews;
-(void)deactivateClearButton;
-(void)_setClearButtonActive:(BOOL)arg1 ;
-(void)_animateClearButtonBecomesInactive;
-(void)_animateClearButtonBecomesActive;
-(UIImage *)xImage;
-(void)_clearButtonTapped;
-(void)dealloc;
-(void)setDelegate:(id<T1SectionClearDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<T1SectionClearDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)prepareForReuse;
-(BOOL)isAnimating;
-(void)setAnimating:(BOOL)arg1 ;
-(T1ClearButton *)clearButton;
-(UILabel *)buttonLabel;
@end

