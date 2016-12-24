/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class FBImageDownloader, CAGradientLayer, UIProgressView, UIImageView, NSString;

@interface FBQuicksilverLoadingView : UIView <CAAnimationDelegate> {

	FBImageDownloader* _imageDownloader;
	CAGradientLayer* _gradientLayer;
	UIProgressView* _progressBar;
	UIImageView* _splashImageView;
	id _downloadingHandler;
	NSString* _splashImageURLString;
	double _loadingProgress;

}

@property (nonatomic,copy) NSString * splashImageURLString;              //@synthesize splashImageURLString=_splashImageURLString - In the implementation block
@property (assign,nonatomic) double loadingProgress;                     //@synthesize loadingProgress=_loadingProgress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithImageDownloader:(id)arg1 ;
-(void)_animateGradient;
-(void)_setSplashImage:(id)arg1 ;
-(void)showProgressBar;
-(void)hideProgressBar;
-(NSString *)splashImageURLString;
-(void)setSplashImageURLString:(NSString *)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(double)loadingProgress;
-(void)setLoadingProgress:(double)arg1 ;
@end
