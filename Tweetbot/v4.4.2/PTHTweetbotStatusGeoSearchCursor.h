/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:52:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D57A2E05-BD0B-4E00-BA11-E75114DE004A/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotStatusSearchCursor.h>

@class PTHTweetbotPlace;

@interface PTHTweetbotStatusGeoSearchCursor : PTHTweetbotStatusSearchCursor {

	double _radius;
	PTHTweetbotPlace* _place;

}

@property (assign,nonatomic) double radius;                         //@synthesize radius=_radius - In the implementation block
@property (nonatomic,retain) PTHTweetbotPlace * place;              //@synthesize place=_place - In the implementation block
-(void)reallyLoadNewer:(/*^block*/id)arg1 ;
-(id)queryDictionary;
-(PTHTweetbotPlace *)place;
-(void)setPlace:(PTHTweetbotPlace *)arg1 ;
-(double)radius;
-(void)setRadius:(double)arg1 ;
@end
