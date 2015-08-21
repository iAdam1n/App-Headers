/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIImageView.h>

@class TFNFrameSheet;

@interface TFNAnimatableImageView : UIImageView {

	TFNFrameSheet* _frameSheet;
	/*^block*/id _animationCompletion;

}

@property (nonatomic,readonly) TFNFrameSheet * frameSheet;              //@synthesize frameSheet=_frameSheet - In the implementation block
@property (nonatomic,copy) id animationCompletion;                      //@synthesize animationCompletion=_animationCompletion - In the implementation block
+(Class)layerClass;
-(void)startAnimatingWithFrameSheet:(id)arg1 duration:(double)arg2 repeatCount:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)startAnimatingWithDuration:(double)arg1 repeatCount:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)setAnimationCompletion:(id)arg1 ;
-(TFNFrameSheet *)frameSheet;
-(id)animationCompletion;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(CGSize)intrinsicContentSize;
@end

