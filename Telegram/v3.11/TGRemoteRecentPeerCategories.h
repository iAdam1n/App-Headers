/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface TGRemoteRecentPeerCategories : NSObject {

	double _lastRefreshTimestamp;
	NSDictionary* _categories;

}

@property (nonatomic,readonly) double lastRefreshTimestamp;              //@synthesize lastRefreshTimestamp=_lastRefreshTimestamp - In the implementation block
@property (nonatomic,readonly) NSDictionary * categories;                //@synthesize categories=_categories - In the implementation block
-(id)initWithLastRefreshTimestamp:(double)arg1 categories:(id)arg2 ;
-(double)lastRefreshTimestamp;
-(NSDictionary *)categories;
@end
