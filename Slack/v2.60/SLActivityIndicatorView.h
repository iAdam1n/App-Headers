/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UIView.h>

@class OLImageView;

@interface SLActivityIndicatorView : UIView {

	BOOL _hidesWhenStopped;
	long long _activityIndicatorViewStyle;
	OLImageView* _imageView;

}

@property (assign,nonatomic) long long activityIndicatorViewStyle;              //@synthesize activityIndicatorViewStyle=_activityIndicatorViewStyle - In the implementation block
@property (assign,nonatomic) BOOL hidesWhenStopped;                             //@synthesize hidesWhenStopped=_hidesWhenStopped - In the implementation block
@property (nonatomic,retain) OLImageView * imageView;                           //@synthesize imageView=_imageView - In the implementation block
-(void)configureView;
-(id)suffixForStyle:(long long)arg1 ;
-(id)indicatorImage;
-(id)init;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(OLImageView *)imageView;
-(BOOL)isAnimating;
-(void)stopAnimating;
-(void)startAnimating;
-(long long)activityIndicatorViewStyle;
-(void)setActivityIndicatorViewStyle:(long long)arg1 ;
-(void)setHidesWhenStopped:(BOOL)arg1 ;
-(BOOL)hidesWhenStopped;
-(id)initWithActivityIndicatorStyle:(long long)arg1 ;
-(void)setImageView:(OLImageView *)arg1 ;
@end
