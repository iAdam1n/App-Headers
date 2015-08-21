/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:04 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSDictionary, NSDate, NSSet, NSIndexSet;

@interface TrackingEvent : NSObject {

	BOOL bIsRoiEvent;
	NSString* trackingName;
	NSDictionary* trackingParameters;
	NSDate* tStamp;
	NSString* flagsetName;
	NSSet* flags;
	NSIndexSet* numericFlags;

}

@property (nonatomic,retain) NSString * trackingName; 
@property (nonatomic,retain) NSDictionary * trackingParameters; 
@property (nonatomic,retain) NSString * flagsetName; 
@property (nonatomic,retain) NSSet * flags; 
@property (nonatomic,retain) NSIndexSet * numericFlags; 
@property (nonatomic,retain) NSDate * tStamp; 
@property (assign,nonatomic) BOOL bIsRoiEvent; 
+(id)Factory:(id)arg1 trackingParameters:(id)arg2 flagssetName:(id)arg3 flags:(id)arg4 numericFlags:(id)arg5 timeStamp:(id)arg6 ;
+(id)Factory:(id)arg1 trackingParameters:(id)arg2 timeStamp:(id)arg3 ;
-(void)setTrackingName:(NSString *)arg1 ;
-(NSString *)trackingName;
-(void)setTrackingParameters:(NSDictionary *)arg1 ;
-(void)setTStamp:(NSDate *)arg1 ;
-(void)setFlagsetName:(NSString *)arg1 ;
-(void)setNumericFlags:(NSIndexSet *)arg1 ;
-(NSDictionary *)trackingParameters;
-(NSDate *)tStamp;
-(BOOL)bIsRoiEvent;
-(void)setBIsRoiEvent:(BOOL)arg1 ;
-(NSString *)flagsetName;
-(NSIndexSet *)numericFlags;
-(void)setFlags:(NSSet *)arg1 ;
-(NSSet *)flags;
@end
