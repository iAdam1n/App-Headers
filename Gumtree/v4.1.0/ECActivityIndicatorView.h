/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:21 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIActivityIndicatorView.h>

@class CABasicAnimation, UIImageView;

@interface ECActivityIndicatorView : UIActivityIndicatorView {

	CABasicAnimation* _animation;
	UIImageView* _imageView;

}

@property (nonatomic,retain) CABasicAnimation * animation;              //@synthesize animation=_animation - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                   //@synthesize imageView=_imageView - In the implementation block
-(id)initWithSmallSize;
-(id)initWithLargeSize;
-(id)init:(id)arg1 ;
-(void)dealloc;
-(CABasicAnimation *)animation;
-(UIImageView *)imageView;
-(void)stopAnimating;
-(void)startAnimating;
-(void)setAnimation:(CABasicAnimation *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)applicationWillEnterForeground;
@end

