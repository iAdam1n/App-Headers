/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 6:53:39 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/1B765338-CA71-42BD-BD25-B178C5389776/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotCell.h>

@class PTHTweetbotStatusView;

@interface _PTHTweetbotMuteMatchingTweetsCell : PTHTweetbotCell {

	PTHTweetbotStatusView* _statusView;
	BOOL _hideSeparatorLine;

}

@property (assign,nonatomic) BOOL hideSeparatorLine;              //@synthesize hideSeparatorLine=_hideSeparatorLine - In the implementation block
-(BOOL)hideSeparatorLine;
-(void)setHideSeparatorLine:(BOOL)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setItem:(id)arg1 ;
@end
