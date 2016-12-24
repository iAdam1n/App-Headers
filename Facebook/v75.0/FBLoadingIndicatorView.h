/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UIView, UILabel, NSString, UIColor, UIFont;

@interface FBLoadingIndicatorView : UIView {

	UIActivityIndicatorView* _spinner;
	UIView* _container;
	UILabel* _label;
	BOOL _pinSpinnerToTop;
	double _paddingX;

}

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) UIColor * textColor; 
@property (nonatomic,retain) UIFont * textFont; 
@property (nonatomic,retain) UIColor * spinnerTintColor; 
@property (assign,nonatomic) BOOL hidesWhenStopped; 
@property (assign,nonatomic) BOOL pinSpinnerToTop;                             //@synthesize pinSpinnerToTop=_pinSpinnerToTop - In the implementation block
@property (assign,nonatomic) double paddingX;                                  //@synthesize paddingX=_paddingX - In the implementation block
@property (getter=isAnimating,nonatomic,readonly) BOOL animating; 
-(id)initWithFrame:(CGRect)arg1 spinnerStyle:(long long)arg2 ;
-(void)setTextFont:(UIFont *)arg1 ;
-(void)setPinSpinnerToTop:(BOOL)arg1 ;
-(void)animate:(BOOL)arg1 ;
-(void)setSpinnerTintColor:(UIColor *)arg1 ;
-(void)setPaddingX:(double)arg1 ;
-(UIColor *)spinnerTintColor;
-(BOOL)pinSpinnerToTop;
-(double)paddingX;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTextColor:(UIColor *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)sizeToFit;
-(UIColor *)textColor;
-(BOOL)isAnimating;
-(void)stopAnimating;
-(void)startAnimating;
-(void)setHidesWhenStopped:(BOOL)arg1 ;
-(BOOL)hidesWhenStopped;
-(UIFont *)textFont;
@end
