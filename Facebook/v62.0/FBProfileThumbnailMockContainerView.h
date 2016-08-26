/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:30 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class FBProfileThumbnailMockView, UIImage, UIImageView;

@interface FBProfileThumbnailMockContainerView : UIView {

	FBProfileThumbnailMockView* _mockView;
	long long _numberOfImageOccurances;
	double _deviceHeightRatio;
	double _deviceWidthRatio;
	UIImage* _thumbnail;
	UIImageView* _thumbnailView;

}

@property (assign,nonatomic) UIImage * thumbnail;                      //@synthesize thumbnail=_thumbnail - In the implementation block
@property (assign,nonatomic) UIImageView * thumbnailView;              //@synthesize thumbnailView=_thumbnailView - In the implementation block
-(id)initWithNumberOfImageOccurances:(long long)arg1 thumbnail:(id)arg2 imageDownloader:(id)arg3 deviceHeightRatio:(double)arg4 deviceWidthRatio:(double)arg5 ;
-(void)updateThumbnail:(id)arg1 ;
-(CGRect)getFrameOfThumbnail;
-(void)animationForMockWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)resetPosition;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setThumbnailView:(UIImageView *)arg1 ;
-(UIImageView *)thumbnailView;
-(UIImage *)thumbnail;
-(void)setThumbnail:(UIImage *)arg1 ;
@end
