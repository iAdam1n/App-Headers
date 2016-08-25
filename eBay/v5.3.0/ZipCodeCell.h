/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/DisplayCell.h>

@class UIActivityIndicatorView, UITextField, UIButton, UIView;

@interface ZipCodeCell : DisplayCell {

	UIActivityIndicatorView* _zipActivityView;
	UITextField* _zipCodeField;
	UIButton* _useMyLocationButton;
	UIView* _zipContainer;

}

@property (nonatomic,retain) UIActivityIndicatorView * zipActivityView;              //@synthesize zipActivityView=_zipActivityView - In the implementation block
@property (nonatomic,retain) UITextField * zipCodeField;                             //@synthesize zipCodeField=_zipCodeField - In the implementation block
@property (nonatomic,retain) UIButton * useMyLocationButton;                         //@synthesize useMyLocationButton=_useMyLocationButton - In the implementation block
@property (nonatomic,retain) UIView * zipContainer;                                  //@synthesize zipContainer=_zipContainer - In the implementation block
-(UITextField *)zipCodeField;
-(UIButton *)useMyLocationButton;
-(UIActivityIndicatorView *)zipActivityView;
-(void)setZipCodeField:(UITextField *)arg1 ;
-(void)setUseMyLocationButton:(UIButton *)arg1 ;
-(void)setZipActivityView:(UIActivityIndicatorView *)arg1 ;
-(UIView *)zipContainer;
-(void)setZipContainer:(UIView *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

