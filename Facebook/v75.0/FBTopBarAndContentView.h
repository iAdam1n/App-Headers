/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface FBTopBarAndContentView : UIView {

	UIView* _topView;
	BOOL _shouldShowTopView;
	UIView* _contentView;
	double _topLayoutGuideLength;
	double _bottomLayoutGuideLength;

}

@property (assign,nonatomic) double topLayoutGuideLength;                 //@synthesize topLayoutGuideLength=_topLayoutGuideLength - In the implementation block
@property (assign,nonatomic) double bottomLayoutGuideLength;              //@synthesize bottomLayoutGuideLength=_bottomLayoutGuideLength - In the implementation block
-(void)setBottomLayoutGuideLength:(double)arg1 ;
-(void)setTopLayoutGuideLength:(double)arg1 ;
-(double)topLayoutGuideLength;
-(double)bottomLayoutGuideLength;
-(void)setAndDisplayTopView:(id)arg1 ;
-(void)removeTopViewAnimated:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentView:(id)arg1 ;
-(void)layoutSubviews;
@end
