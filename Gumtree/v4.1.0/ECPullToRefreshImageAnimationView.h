/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:15 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Gumtree/ECPullToRefreshAnimationView.h>

@class UIImageView, CAShapeLayer, NSString;

@interface ECPullToRefreshImageAnimationView : UIView <ECPullToRefreshAnimationView> {

	double _pullPercent;
	UIImageView* _imageView;
	CAShapeLayer* _shapeLayer;

}

@property (nonatomic,retain) UIImageView * imageView;                //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) CAShapeLayer * shapeLayer;              //@synthesize shapeLayer=_shapeLayer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double pullPercent;                     //@synthesize pullPercent=_pullPercent - In the implementation block
-(void)setShapeLayer:(CAShapeLayer *)arg1 ;
-(void)setPullPercent:(double)arg1 ;
-(double)pullPercent;
-(id)initWithImage:(id)arg1 ;
-(UIImageView *)imageView;
-(void)stopAnimating;
-(void)startAnimating;
-(CAShapeLayer *)shapeLayer;
-(void)setImageView:(UIImageView *)arg1 ;
@end
