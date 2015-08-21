/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIImageView.h>

@class CADisplayLink, NSArray, UIImageView, UIImage;

@interface TFNCrossDissolvableImageView : UIImageView {

	CADisplayLink* _displayLink;
	double _startPercentComplete;
	double _endPercentComplete;
	double _startTimestamp;
	double _animationDuration;
	NSArray* _images;
	double _percentComplete;
	/*^block*/id _completionBlock;
	UIImageView* _overlayView;

}

@property (nonatomic,copy) NSArray * images;                         //@synthesize images=_images - In the implementation block
@property (assign,nonatomic) double percentComplete;                 //@synthesize percentComplete=_percentComplete - In the implementation block
@property (nonatomic,retain) UIImage * baseImage; 
@property (nonatomic,copy) id completionBlock;                       //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) UIImageView * overlayView;              //@synthesize overlayView=_overlayView - In the implementation block
-(void)_updateOverlayView;
-(void)setPercentComplete:(double)arg1 animated:(BOOL)arg2 duration:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)_animateOverlayView;
-(id)initWithImages:(id)arg1 ;
-(void)setPercentComplete:(double)arg1 animated:(BOOL)arg2 duration:(double)arg3 ;
-(UIImageView *)overlayView;
-(UIImage *)baseImage;
-(id)initWithImage:(id)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(double)percentComplete;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(NSArray *)images;
-(id)initWithImage:(id)arg1 highlightedImage:(id)arg2 ;
-(void)setImages:(NSArray *)arg1 ;
-(void)setPercentComplete:(double)arg1 ;
-(void)setBaseImage:(UIImage *)arg1 ;
-(void)setOverlayView:(UIImageView *)arg1 ;
@end

