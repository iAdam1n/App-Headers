/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:13 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface IGExploreTTILogger : NSObject {

	BOOL _hasLoggedOnce;
	double _startTimestamp;
	NSString* _module;

}

@property (assign,nonatomic) double startTimestamp;              //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (nonatomic,readonly) NSString * module;                //@synthesize module=_module - In the implementation block
@property (assign,nonatomic) BOOL hasLoggedOnce;                 //@synthesize hasLoggedOnce=_hasLoggedOnce - In the implementation block
-(id)initWithModule:(id)arg1 ;
-(void)stopWithSuccess:(BOOL)arg1 ;
-(BOOL)hasLoggedOnce;
-(void)setHasLoggedOnce:(BOOL)arg1 ;
-(NSString *)module;
-(void)start;
-(double)startTimestamp;
-(void)setStartTimestamp:(double)arg1 ;
@end
