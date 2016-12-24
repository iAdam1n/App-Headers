/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/Reddit-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@protocol HeaderBarViewDelegate;
@class NSObject, BaseButton, CALayer;

@interface HeaderBarView : UICollectionReusableView {

	NSObject*<HeaderBarViewDelegate> _delegate;
	double _leftPadding;
	BaseButton* _leftButton;
	BaseButton* _rightButton;
	CALayer* _bottomBorder;

}

@property (nonatomic,retain) BaseButton * leftButton;                                       //@synthesize leftButton=_leftButton - In the implementation block
@property (nonatomic,retain) BaseButton * rightButton;                                      //@synthesize rightButton=_rightButton - In the implementation block
@property (nonatomic,retain) CALayer * bottomBorder;                                        //@synthesize bottomBorder=_bottomBorder - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<HeaderBarViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double leftPadding;                                            //@synthesize leftPadding=_leftPadding - In the implementation block
-(void)didTapLeftButton:(id)arg1 ;
-(void)didTapRightButton:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(NSObject*<HeaderBarViewDelegate>)arg1 ;
-(NSObject*<HeaderBarViewDelegate>)delegate;
-(void)prepareForReuse;
-(void)setLeftPadding:(double)arg1 ;
-(BaseButton *)leftButton;
-(BaseButton *)rightButton;
-(void)setLeftButton:(BaseButton *)arg1 ;
-(void)setRightButton:(BaseButton *)arg1 ;
-(CALayer *)bottomBorder;
-(double)leftPadding;
-(void)setBottomBorder:(CALayer *)arg1 ;
@end
