/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SolitaireFree/SolitaireFree-Structs.h>
@class NSString, NSMutableArray;

@interface TSStatsMap : NSObject {

	NSString* _requestId;
	NSMutableArray* _errors;
	NSMutableArray* _clicks;
	NSMutableArray* _exceptions;

}

@property (nonatomic,retain) NSString * requestId;                     //@synthesize requestId=_requestId - In the implementation block
@property (nonatomic,retain) NSMutableArray * errors;                  //@synthesize errors=_errors - In the implementation block
@property (nonatomic,retain) NSMutableArray * clicks;                  //@synthesize clicks=_clicks - In the implementation block
@property (nonatomic,retain) NSMutableArray * exceptions;              //@synthesize exceptions=_exceptions - In the implementation block
+(id)get:(id)arg1 ;
+(id)sharedStatsMap;
+(void)remove:(id)arg1 ;
-(id)initWithRequestId:(id)arg1 ;
-(void)addClickAtCoordinate:(CGPoint)arg1 forAdUnitIndex:(unsigned long long)arg2 ;
-(id)getPayload;
-(void)addException:(id)arg1 ;
-(id)getStatsDict;
-(id)description;
-(NSString *)requestId;
-(void)setRequestId:(NSString *)arg1 ;
-(void)addError:(id)arg1 ;
-(void)setExceptions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)exceptions;
-(NSMutableArray *)errors;
-(void)setErrors:(NSMutableArray *)arg1 ;
-(void)setClicks:(NSMutableArray *)arg1 ;
-(NSMutableArray *)clicks;
@end
