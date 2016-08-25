/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface RhythmDisplayAdTracking : NSObject {

	NSString* bridgeScheme;
	NSString* bridgeAuthority;
	NSArray* trackUrls;
	BOOL isAlways;
	BOOL isFired;

}

@property (nonatomic,retain) NSString * bridgeScheme; 
@property (nonatomic,retain) NSString * bridgeAuthority; 
@property (nonatomic,retain) NSArray * trackUrls; 
@property (assign,nonatomic) BOOL isAlways; 
@property (assign,nonatomic) BOOL isFired; 
-(NSString *)bridgeAuthority;
-(void)setBridgeAuthority:(NSString *)arg1 ;
-(NSString *)bridgeScheme;
-(void)setBridgeScheme:(NSString *)arg1 ;
-(NSArray *)trackUrls;
-(void)setTrackUrls:(NSArray *)arg1 ;
-(BOOL)isAlways;
-(void)setIsAlways:(BOOL)arg1 ;
-(BOOL)isFired;
-(void)setIsFired:(BOOL)arg1 ;
-(void)dealloc;
@end

