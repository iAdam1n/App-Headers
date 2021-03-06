/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:29 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNPagedGalleryCell.h>

@class NSArray;

@interface T1EventGalleryCell : TFNPagedGalleryCell {

	BOOL _showTweetCount;
	NSArray* _events;
	/*^block*/id _eventTapBlock;
	/*^block*/id _viewMoreTapBlock;
	long long _eventViewStyle;

}

@property (nonatomic,copy,readonly) NSArray * events;               //@synthesize events=_events - In the implementation block
@property (nonatomic,copy) id eventTapBlock;                        //@synthesize eventTapBlock=_eventTapBlock - In the implementation block
@property (nonatomic,copy) id viewMoreTapBlock;                     //@synthesize viewMoreTapBlock=_viewMoreTapBlock - In the implementation block
@property (assign,nonatomic) BOOL showTweetCount;                   //@synthesize showTweetCount=_showTweetCount - In the implementation block
@property (assign,nonatomic) long long eventViewStyle;              //@synthesize eventViewStyle=_eventViewStyle - In the implementation block
+(double)heightForEvents:(id)arg1 eventViewStyle:(long long)arg2 layoutMetrics:(id)arg3 ;
+(double)heightForEvents:(id)arg1 tableWidth:(double)arg2 contentPadding:(UIEdgeInsets)arg3 eventViewStyle:(long long)arg4 ;
-(id)viewMoreTapBlock;
-(void)setViewMoreTapBlock:(id)arg1 ;
-(void)setEventViewStyle:(long long)arg1 ;
-(long long)eventViewStyle;
-(void)setShowTweetCount:(BOOL)arg1 ;
-(void)setEventTapBlock:(id)arg1 ;
-(void)setEventGallery:(id)arg1 withState:(id)arg2 ;
-(id)eventTapBlock;
-(BOOL)showTweetCount;
-(void)setEvents:(id)arg1 withState:(id)arg2 ;
-(void)currentPageWillDisplay;
-(NSArray *)events;
-(void)cleanup;
@end

