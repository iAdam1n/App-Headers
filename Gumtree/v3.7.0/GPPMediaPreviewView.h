/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:03 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/GPPImageView.h>

@class UIImageView, MPMoviePlayerController;

@interface GPPMediaPreviewView : GPPImageView {

	UIImageView* _videoIconView;
	MPMoviePlayerController* _movieController;
	double _minimumHeightToDisplayVideoIcon;
	double _videoIconMargin;
	double _thumbnailImageTime;
	CGSize _videoIconSize;

}

@property (assign,nonatomic) double minimumHeightToDisplayVideoIcon;              //@synthesize minimumHeightToDisplayVideoIcon=_minimumHeightToDisplayVideoIcon - In the implementation block
@property (assign,nonatomic) CGSize videoIconSize;                                //@synthesize videoIconSize=_videoIconSize - In the implementation block
@property (assign,nonatomic) double videoIconMargin;                              //@synthesize videoIconMargin=_videoIconMargin - In the implementation block
@property (assign,nonatomic) double thumbnailImageTime;                           //@synthesize thumbnailImageTime=_thumbnailImageTime - In the implementation block
-(void)setMinimumHeightToDisplayVideoIcon:(double)arg1 ;
-(void)setVideoIconSize:(CGSize)arg1 ;
-(void)setVideoIconMargin:(double)arg1 ;
-(void)initializeVideoIcon;
-(void)thumbnailImageRequestDidFinish:(id)arg1 ;
-(double)videoIconMargin;
-(CGSize)videoIconSize;
-(id)initWithFrame:(CGRect)arg1 mediaAttachment:(id)arg2 ;
-(double)minimumHeightToDisplayVideoIcon;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setThumbnailImageTime:(double)arg1 ;
-(double)thumbnailImageTime;
@end

