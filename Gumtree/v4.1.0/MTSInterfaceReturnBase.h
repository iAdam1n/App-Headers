/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:22 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSNumber, NSString, NSDictionary;

@interface MTSInterfaceReturnBase : NSObject {

	BOOL _bSuccess;
	NSNumber* _elapsedTime;
	NSString* _ack;
	NSString* _faultString;
	NSString* _errorMessage;
	NSDictionary* _faultyParameterList;

}

@property (nonatomic,copy) NSNumber * elapsedTime;                          //@synthesize elapsedTime=_elapsedTime - In the implementation block
@property (assign) BOOL bSuccess;                                           //@synthesize bSuccess=_bSuccess - In the implementation block
@property (nonatomic,copy) NSString * ack;                                  //@synthesize ack=_ack - In the implementation block
@property (nonatomic,copy) NSString * faultString;                          //@synthesize faultString=_faultString - In the implementation block
@property (nonatomic,copy) NSString * errorMessage;                         //@synthesize errorMessage=_errorMessage - In the implementation block
@property (nonatomic,copy) NSDictionary * faultyParameterList;              //@synthesize faultyParameterList=_faultyParameterList - In the implementation block
-(BOOL)bSuccess;
-(void)setBSuccess:(BOOL)arg1 ;
-(NSString *)faultString;
-(void)setFaultString:(NSString *)arg1 ;
-(NSDictionary *)faultyParameterList;
-(void)setFaultyParameterList:(NSDictionary *)arg1 ;
-(void)setElapsedTime:(NSNumber *)arg1 ;
-(NSNumber *)elapsedTime;
-(void)setErrorMessage:(NSString *)arg1 ;
-(NSString *)errorMessage;
-(void)setAck:(NSString *)arg1 ;
-(NSString *)ack;
@end

