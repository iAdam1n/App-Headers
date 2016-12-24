/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIColor, UILabel, UIView;

@interface AFAdSDKRibbonView : UIView {

	UIColor* _ribbonColor;
	UILabel* _title;
	UIView* _ribbonView;

}

@property (nonatomic,retain) UIColor * ribbonColor;              //@synthesize ribbonColor=_ribbonColor - In the implementation block
@property (nonatomic,retain) UILabel * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIView * ribbonView;                //@synthesize ribbonView=_ribbonView - In the implementation block
-(void)setRibbonColor:(UIColor *)arg1 ;
-(UIColor *)ribbonColor;
-(UIView *)ribbonView;
-(void)setRibbonView:(UIView *)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)dealloc;
-(void)setTitle:(UILabel *)arg1 ;
-(UILabel *)title;
-(void)willMoveToSuperview:(id)arg1 ;
@end
