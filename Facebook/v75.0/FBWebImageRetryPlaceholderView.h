/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBWebImageViewListener.h>

@class UIButton, UIActivityIndicatorView, FBWebImageView, NSString;

@interface FBWebImageRetryPlaceholderView : UIView <FBWebImageViewListener> {

	UIButton* _retryButton;
	UIActivityIndicatorView* _simpleSpinnerView;
	BOOL _didTapRetryFlag;
	BOOL _didRetryFlag;
	FBWebImageView* _imageView;
	NSString* _lastErrorDomain;
	long long _lastErrorCode;
	NSString* _analyticsModule;

}

@property (nonatomic,copy) NSString * analyticsModule;              //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)analyticsModule;
-(void)setAnalyticsModule:(NSString *)arg1 ;
-(void)webImageViewDidSetImage:(id)arg1 fromCache:(BOOL)arg2 ;
-(void)webImageView:(id)arg1 didFailDownloadingWithError:(id)arg2 ;
-(void)webImageView:(id)arg1 willStartDownloadingSpecifier:(id)arg2 ;
-(id)initWithPlaceholderView:(id)arg1 imageView:(id)arg2 ;
-(void)_didTapRetryButton:(id)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
@end
