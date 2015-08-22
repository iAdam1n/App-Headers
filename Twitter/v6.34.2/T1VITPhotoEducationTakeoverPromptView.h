/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:30 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/T1TakeoverPromptView.h>

@class UIView, TFNAnimatableImageView, CADisplayLink, UIImageView;

@interface T1VITPhotoEducationTakeoverPromptView : T1TakeoverPromptView {

	UIView* _dummy;
	TFNAnimatableImageView* _faveAnimatableImageView;
	CADisplayLink* _displayLink;
	double _startTimeStamp;
	UIView* _flipView;
	UIImageView* _tweetEllenView;
	UIImageView* _tweetLinkView;

}

@property (nonatomic,readonly) UIView * flipView;                         //@synthesize flipView=_flipView - In the implementation block
@property (nonatomic,readonly) UIImageView * tweetEllenView;              //@synthesize tweetEllenView=_tweetEllenView - In the implementation block
@property (nonatomic,readonly) UIImageView * tweetLinkView;               //@synthesize tweetLinkView=_tweetLinkView - In the implementation block
-(void)_syncAnimations:(id)arg1 ;
-(void)_startLoopingAnimation;
-(/*^block*/id)_addKeyframesBlock;
-(UIView *)flipView;
-(UIImageView *)tweetLinkView;
-(UIImageView *)tweetEllenView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)_initSubviews;
-(void)invalidateDisplayLink;
-(void)animateIn;
@end
