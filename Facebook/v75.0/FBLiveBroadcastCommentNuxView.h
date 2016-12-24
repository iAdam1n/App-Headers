/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBStreamingEventStrategy;
@class UIImageView, UILabel;

@interface FBLiveBroadcastCommentNuxView : UIView {

	UIImageView* _nuxImage;
	UILabel* _nuxText;
	id<FBStreamingEventStrategy> _strategy;
	unsigned long long _style;

}

@property (assign,nonatomic) unsigned long long style;              //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL contentsHidden; 
-(id)initWithFrame:(CGRect)arg1 forViewer:(BOOL)arg2 style:(unsigned long long)arg3 context:(unsigned long long)arg4 ;
-(id)initWithFrame:(CGRect)arg1 forViewer:(BOOL)arg2 style:(unsigned long long)arg3 context:(unsigned long long)arg4 strategy:(id)arg5 ;
-(id)initWithFrame:(CGRect)arg1 forViewer:(BOOL)arg2 style:(unsigned long long)arg3 strategy:(id)arg4 ;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(BOOL)contentsHidden;
-(void)setContentsHidden:(BOOL)arg1 ;
@end
