/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface UtilPal : NSObject
+(void)initializeSeed;
+(double)getClientTimeCurrent;
+(int)randomInt;
+(BOOL)stringMatch:(id)arg1 WithCond:(id)arg2 ;
+(id)filterSet:(id)arg1 withEqualCond:(id)arg2 atValue:(id)arg3 ;
+(BOOL)isNan:(double)arg1 ;
+(double)convertServerTimeToClientTime:(double)arg1 ;
+(double)convertClientTimeToServerTime:(double)arg1 ;
+(long long)uniqueKey:(id)arg1 ;
@end
