/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TGGroupedUserOnlineInfo : NSObject {

	unsigned long long _totalCount;
	unsigned long long _onlineCount;

}

@property (nonatomic,readonly) unsigned long long totalCount;               //@synthesize totalCount=_totalCount - In the implementation block
@property (nonatomic,readonly) unsigned long long onlineCount;              //@synthesize onlineCount=_onlineCount - In the implementation block
-(id)initWithTotalCount:(unsigned long long)arg1 onlineCount:(unsigned long long)arg2 ;
-(unsigned long long)onlineCount;
-(unsigned long long)totalCount;
@end
