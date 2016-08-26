/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:52 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBStatsObject : NSObject {

	long long _count;
	long long _sum;
	long long _squareSum;
	long long _max;
	long long _last;
	NSString* _string;

}

@property (assign,nonatomic) long long count;                  //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) long long sum;                    //@synthesize sum=_sum - In the implementation block
@property (assign,nonatomic) long long squareSum;              //@synthesize squareSum=_squareSum - In the implementation block
@property (assign,nonatomic) long long max;                    //@synthesize max=_max - In the implementation block
@property (assign,nonatomic) long long last;                   //@synthesize last=_last - In the implementation block
@property (nonatomic,copy) NSString * string;                  //@synthesize string=_string - In the implementation block
-(void)setSum:(long long)arg1 ;
-(long long)squareSum;
-(void)setSquareSum:(long long)arg1 ;
-(void)setMax:(long long)arg1 ;
-(long long)max;
-(long long)count;
-(NSString *)string;
-(void)setCount:(long long)arg1 ;
-(long long)sum;
-(void)setString:(NSString *)arg1 ;
-(long long)last;
-(void)setLast:(long long)arg1 ;
@end
