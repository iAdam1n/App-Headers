/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:06:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/ECBB6493-3CD3-4031-8AE5-B625F29152BF/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <UIKit/UIView.h>

@class PTHProgressView, UILabel, NSDateFormatter, NSDate;

@interface PTHTweetbotRefreshView : UIView {

	PTHProgressView* _progressView;
	UILabel* _refreshTitleLabel;
	UILabel* _updateDateLabel;
	NSDateFormatter* _updateDateFormatter;
	BOOL _refreshing;
	BOOL _streaming;
	double _progress;
	NSDate* _updateDate;

}

@property (assign,nonatomic) double progress;                                    //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) NSDate * updateDate;                                //@synthesize updateDate=_updateDate - In the implementation block
@property (getter=isRefreshing,nonatomic,readonly) BOOL refreshing;              //@synthesize refreshing=_refreshing - In the implementation block
@property (getter=isStreaming,nonatomic,readonly) BOOL streaming;                //@synthesize streaming=_streaming - In the implementation block
-(void)startStreaming;
-(void)startRefresh;
-(void)stopRefresh;
-(void)_updateDate;
-(void)didMoveToWindow:(id)arg1 ;
-(void)_updateProgress;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(CGSize)intrinsicContentSize;
-(void)setProgress:(double)arg1 ;
-(double)progress;
-(BOOL)isRefreshing;
-(BOOL)isStreaming;
-(void)stopStreaming;
-(NSDate *)updateDate;
-(void)setUpdateDate:(NSDate *)arg1 ;
@end

