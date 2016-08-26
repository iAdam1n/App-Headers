/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:52:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D57A2E05-BD0B-4E00-BA11-E75114DE004A/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
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

@property (nonatomic,retain) NSString * unreadItemCountString;              //@synthesize unreadItemCountString=_unreadItemCountString - In the implementation block
@property (assign,nonatomic) long long unreadItemCount;                     //@synthesize unreadItemCount=_unreadItemCount - In the implementation block
@property (assign,nonatomic) double position;                               //@synthesize position=_position - In the implementation block
-(void)setUnreadItemCount:(long long)arg1 ;
-(void)setPosition:(double)arg1 animated:(BOOL)arg2 ;
-(void)_updateCountLabel;
-(long long)unreadItemCount;
-(NSString *)unreadItemCountString;
-(void)setUnreadItemCountString:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setPosition:(double)arg1 ;
-(double)position;
@end
