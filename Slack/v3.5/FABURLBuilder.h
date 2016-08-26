/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableString;

@interface FABURLBuilder : NSObject {

	NSMutableString* _URLString;
	unsigned long long _queryParams;

}

@property (nonatomic,retain) NSMutableString * URLString;                 //@synthesize URLString=_URLString - In the implementation block
@property (assign,nonatomic) unsigned long long queryParams;              //@synthesize queryParams=_queryParams - In the implementation block
+(id)URLWithBase:(id)arg1 ;
-(void)appendComponent:(id)arg1 ;
-(id)escapeString:(id)arg1 ;
-(unsigned long long)queryParams;
-(void)setQueryParams:(unsigned long long)arg1 ;
-(void)escapeAndAppendComponent:(id)arg1 ;
-(void)appendValue:(id)arg1 forQueryParam:(id)arg2 ;
-(id)init;
-(id)URL;
-(NSMutableString *)URLString;
-(void)setURLString:(NSMutableString *)arg1 ;
@end
