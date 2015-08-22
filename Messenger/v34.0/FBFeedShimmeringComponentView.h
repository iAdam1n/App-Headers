/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:53 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIImage, FBShimmeringView, UIImageView;

@interface FBFeedShimmeringComponentView : UIView {

	UIImage* _shimmerImage;
	FBShimmeringView* _shimmeringView;
	UIImageView* _shimmerCardView;

}

@property (nonatomic,retain) UIImage * shimmerImage;                         //@synthesize shimmerImage=_shimmerImage - In the implementation block
@property (nonatomic,retain) FBShimmeringView * shimmeringView;              //@synthesize shimmeringView=_shimmeringView - In the implementation block
@property (nonatomic,retain) UIImageView * shimmerCardView;                  //@synthesize shimmerCardView=_shimmerCardView - In the implementation block
-(void)setShimmerImage:(UIImage *)arg1 ;
-(UIImage *)shimmerImage;
-(FBShimmeringView *)shimmeringView;
-(void)setShimmeringView:(FBShimmeringView *)arg1 ;
-(UIImageView *)shimmerCardView;
-(void)setShimmerCardView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end
