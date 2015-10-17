/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 7:32:55 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/D81FFA38-D076-468D-98C2-AE7F8E5F3EAA/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <PTHCommon/PTHColorGroupTableViewCell.h>

@class UIView;

@interface PTHTweetbotMessageCell : PTHColorGroupTableViewCell {

	UIView* _bottomSeparatorView;
	UIView* _topSeparatorView;

}

@property (assign,getter=hasTopSeparator,nonatomic) BOOL topSeparator; 
@property (assign,getter=hasBottomSeparator,nonatomic) BOOL bottomSeparator; 
+(id)cellWithText:(id)arg1 ;
+(id)reuseIdentifier;
-(BOOL)hasTopSeparator;
-(BOOL)hasBottomSeparator;
-(id)init;
-(id)initWithText:(id)arg1 ;
-(void)setTopSeparator:(BOOL)arg1 ;
-(void)setBottomSeparator:(BOOL)arg1 ;
@end
