/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ADCV4VCHolding : NSObject {

	BOOL ad_finished;
	BOOL callback_successful;
	BOOL callback_finished;
	NSString* zone;

}

@property (assign,nonatomic) BOOL ad_finished; 
@property (assign,nonatomic) BOOL callback_finished; 
@property (assign,nonatomic) BOOL callback_successful; 
@property (nonatomic,retain) NSString * zone; 
-(void)setCallback_successful:(BOOL)arg1 ;
-(BOOL)ad_finished;
-(BOOL)callback_successful;
-(void)setCallback_finished:(BOOL)arg1 ;
-(BOOL)callback_finished;
-(void)setAd_finished:(BOOL)arg1 ;
-(id)init;
-(NSString *)zone;
-(void)setZone:(NSString *)arg1 ;
@end
