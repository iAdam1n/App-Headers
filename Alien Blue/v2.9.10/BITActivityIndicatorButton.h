/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIButton.h>

@class UIActivityIndicatorView;

@interface BITActivityIndicatorButton : UIButton {

	BOOL _indicatorVisible;
	UIActivityIndicatorView* _indicator;

}

@property (nonatomic,retain) UIActivityIndicatorView * indicator;              //@synthesize indicator=_indicator - In the implementation block
@property (assign,nonatomic) BOOL indicatorVisible;                            //@synthesize indicatorVisible=_indicatorVisible - In the implementation block
-(BOOL)indicatorVisible;
-(void)setIndicatorVisible:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setShowsActivityIndicator:(BOOL)arg1 ;
-(void)setIndicator:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)indicator;
@end
