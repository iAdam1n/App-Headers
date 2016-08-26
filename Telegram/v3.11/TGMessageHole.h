/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TGMessageHole : NSObject {

	int _minId;
	int _minTimestamp;
	int _maxId;
	int _maxTimestamp;

}

@property (nonatomic,readonly) int minId;                     //@synthesize minId=_minId - In the implementation block
@property (nonatomic,readonly) int minTimestamp;              //@synthesize minTimestamp=_minTimestamp - In the implementation block
@property (nonatomic,readonly) int maxId;                     //@synthesize maxId=_maxId - In the implementation block
@property (nonatomic,readonly) int maxTimestamp;              //@synthesize maxTimestamp=_maxTimestamp - In the implementation block
-(id)initWithMinId:(int)arg1 minTimestamp:(int)arg2 maxId:(int)arg3 maxTimestamp:(int)arg4 ;
-(int)minId;
-(int)maxId;
-(int)maxTimestamp;
-(int)minTimestamp;
-(BOOL)covers:(id)arg1 ;
-(id)exclude:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(BOOL)intersects:(id)arg1 ;
@end
