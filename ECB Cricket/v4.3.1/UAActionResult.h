/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:44:05 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/DE3331E2-1165-4E9B-8894-BDF4D69820B5/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSError;

@interface UAActionResult : NSObject {

	id _value;
	long long _fetchResult;
	NSError* _error;
	long long _status;

}

@property (nonatomic,retain) id value;                           //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) long long fetchResult;              //@synthesize fetchResult=_fetchResult - In the implementation block
@property (nonatomic,retain) NSError * error;                    //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) long long status;                   //@synthesize status=_status - In the implementation block
+(id)emptyResult;
+(id)resultWithValue:(id)arg1 withFetchResult:(long long)arg2 ;
+(id)resultWithError:(id)arg1 withFetchResult:(long long)arg2 ;
+(id)resultWithValue:(id)arg1 ;
+(id)resultWithError:(id)arg1 ;
+(id)rejectedArgumentsResult;
+(id)actionNotFoundResult;
-(void)setFetchResult:(long long)arg1 ;
-(id)initWithValue:(id)arg1 withFetchResult:(long long)arg2 withStatus:(long long)arg3 ;
-(long long)fetchResult;
-(id)value;
-(void)setValue:(id)arg1 ;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

