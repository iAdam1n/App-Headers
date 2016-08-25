/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/ALTask.h>
#import <BubbleMania/ALConnectionManagerDelegate.h>

@protocol ALConnectionManagerDelegate;
@class NSString, NSDictionary;

@interface ALTaskRepeatRequest : ALTask <ALConnectionManagerDelegate> {

	unsigned long long attemptsLeft;
	NSString* requestEndpoint;
	NSString* requestMethod;
	NSDictionary* request;
	id<ALConnectionManagerDelegate> delegate;
	double timeout;

}

@property (assign) unsigned long long attemptsLeft; 
@property (nonatomic,retain) NSString * requestEndpoint; 
@property (nonatomic,retain) NSString * requestMethod; 
@property (nonatomic,retain) NSDictionary * request; 
@property (nonatomic,retain) id<ALConnectionManagerDelegate> delegate; 
@property (assign,nonatomic) double timeout; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSdk:(id)arg1 ;
-(void)setRequestEndpoint:(NSString *)arg1 ;
-(void)setAttemptsLeft:(unsigned long long)arg1 ;
-(void)connectionVia:(id)arg1 didSucceedWith:(long long)arg2 responseBody:(id)arg3 ;
-(void)connectionVia:(id)arg1 didFailWith:(long long)arg2 ;
-(NSString *)requestEndpoint;
-(unsigned long long)attemptsLeft;
-(void)setDelegate:(id<ALConnectionManagerDelegate>)arg1 ;
-(id<ALConnectionManagerDelegate>)delegate;
-(NSDictionary *)request;
-(void)run;
-(void)setTimeout:(double)arg1 ;
-(void)setRequest:(NSDictionary *)arg1 ;
-(void)setRequestMethod:(NSString *)arg1 ;
-(NSString *)requestMethod;
-(double)timeout;
@end

