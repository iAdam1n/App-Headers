/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 5, 2015 at 2:22:20 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/A9F884EB-2F57-4460-BC65-26F233627B1B/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotCell.h>

@class UIView, UIImageView, UILabel, PTHProgressView;

@interface PTHTweetbotCursorGapCell : PTHTweetbotCell {

	UIView* _loadingContainerView;
	UIImageView* _arrowView;
	UILabel* _loadLabel;
	PTHProgressView* _progressView;
	BOOL _isShowingProgress;
	unsigned long long _loadRectEdge;

}

@property (assign,nonatomic) unsigned long long loadRectEdge;              //@synthesize loadRectEdge=_loadRectEdge - In the implementation block
-(void)setLoadRectEdge:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)setLoadRectEdge:(unsigned long long)arg1 ;
-(void)setShowProgress:(BOOL)arg1 animated:(BOOL)arg2 ;
-(unsigned long long)loadRectEdge;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

