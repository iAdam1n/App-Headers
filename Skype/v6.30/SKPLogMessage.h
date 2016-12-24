/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:38 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface SKPLogMessage : NSObject {

	NSString* _text;
	NSDate* _timestamp;
	long long _logLevel;

}

@property (nonatomic,copy) NSString * text;                   //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) long long logLevel;              //@synthesize logLevel=_logLevel - In the implementation block
-(id)initWithText:(id)arg1 logLevel:(long long)arg2 ;
-(id)formattedLogMessage;
-(long long)logLevel;
-(void)setLogLevel:(long long)arg1 ;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
@end
