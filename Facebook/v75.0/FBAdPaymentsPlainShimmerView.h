/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIView, FBShimmeringView;

@interface FBAdPaymentsPlainShimmerView : UIView {

	UIView* _shimmerContentView;
	UIView* _lineView;
	FBShimmeringView* _shimmerView;

}

@property (assign,getter=isShimmering,nonatomic) BOOL shimmering; 
-(void)setShimmering:(BOOL)arg1 ;
-(BOOL)isShimmering;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end
