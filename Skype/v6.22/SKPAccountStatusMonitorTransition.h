/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface SKPAccountStatusMonitorTransition : NSObject {

	long long _from;
	long long _to;
	NSDate* _timestamp;

}

@property (assign,nonatomic) long long from;                  //@synthesize from=_from - In the implementation block
@property (assign,nonatomic) long long to;                    //@synthesize to=_to - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
+(id)transitionWithFromStatus:(long long)arg1 toStatus:(long long)arg2 ;
-(id)prettyFormatting;
-(BOOL)isEqual:(id)arg1 ;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(void)setTo:(long long)arg1 ;
-(void)setFrom:(long long)arg1 ;
-(long long)to;
-(long long)from;
-(id)statusToString:(long long)arg1 ;
@end
