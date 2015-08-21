/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:06:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/ECBB6493-3CD3-4031-8AE5-B625F29152BF/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <UIKit/UIControl.h>

@class UIView, NSLayoutConstraint, UILabel, NSString;

@interface PTHTweetbotCursorUnreadItemsView : UIControl {

	UIView* _contentView;
	NSLayoutConstraint* _contentPositionConstraint;
	UILabel* _countLabel;
	long long _unreadItemCount;
	double _position;
	NSString* _unreadItemCountString;

}

@property (assign,nonatomic) long long unreadItemCount;                     //@synthesize unreadItemCount=_unreadItemCount - In the implementation block
@property (assign,nonatomic) double position;                               //@synthesize position=_position - In the implementation block
@property (nonatomic,retain) NSString * unreadItemCountString;              //@synthesize unreadItemCountString=_unreadItemCountString - In the implementation block
-(long long)unreadItemCount;
-(void)setPosition:(double)arg1 animated:(BOOL)arg2 ;
-(void)setUnreadItemCount:(long long)arg1 ;
-(void)_updateCountLabel;
-(NSString *)unreadItemCountString;
-(void)setUnreadItemCountString:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setPosition:(double)arg1 ;
-(double)position;
@end
