/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSString, NSDictionary;

@interface SimpleMTSResultBase : NSObject {

	BOOL bSuccess;
	NSNumber* elapsedTime;
	NSString* ack;
	NSString* faultString;
	NSString* errorMessage;
	NSDictionary* faultyParameterList;

}

@property (nonatomic,copy) NSNumber * elapsedTime; 
@property (assign) BOOL bSuccess; 
@property (nonatomic,copy) NSString * ack; 
@property (nonatomic,copy) NSString * faultString; 
@property (nonatomic,copy) NSString * errorMessage; 
@property (nonatomic,copy) NSDictionary * faultyParameterList; 
-(BOOL)bSuccess;
-(void)setBSuccess:(BOOL)arg1 ;
-(NSString *)faultString;
-(void)setFaultString:(NSString *)arg1 ;
-(NSDictionary *)faultyParameterList;
-(void)setFaultyParameterList:(NSDictionary *)arg1 ;
-(NSNumber *)elapsedTime;
-(void)setAck:(NSString *)arg1 ;
-(NSString *)ack;
-(void)setElapsedTime:(NSNumber *)arg1 ;
-(void)setErrorMessage:(NSString *)arg1 ;
-(NSString *)errorMessage;
@end

