/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:11 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ATURLConnectionDelegate.h>

@protocol ATAPIRequestDelegate;
@class ATURLConnection, NSString, NSObject;

@interface ATAPIRequest : NSObject <ATURLConnectionDelegate> {

	ATURLConnection* connection;
	NSString* channelName;
	BOOL cancelled;
	float percentageComplete;
	int returnType;
	BOOL failed;
	NSString* errorTitle;
	NSString* errorMessage;
	NSString* errorResponse;
	double timeoutInterval;
	NSObject*<ATAPIRequestDelegate> delegate;
	double expiresMaxAge;

}

@property (assign,nonatomic) int returnType; 
@property (assign,nonatomic) BOOL failed; 
@property (nonatomic,copy) NSString * errorTitle; 
@property (nonatomic,copy) NSString * errorMessage; 
@property (nonatomic,copy) NSString * errorResponse; 
@property (assign,nonatomic) double timeoutInterval; 
@property (assign,nonatomic) NSObject*<ATAPIRequestDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)expiresMaxAge;
-(void)setErrorResponse:(NSString *)arg1 ;
-(int)returnType;
-(void)connectionFinishedSuccessfully:(id)arg1 ;
-(void)connectionFailed:(id)arg1 ;
-(void)connectionDidProgress:(id)arg1 ;
-(id)initWithConnection:(id)arg1 channelName:(id)arg2 ;
-(float)percentageComplete;
-(void)setReturnType:(int)arg1 ;
-(NSString *)errorResponse;
-(void)cancel;
-(void)setDelegate:(NSObject*<ATAPIRequestDelegate>)arg1 ;
-(void)dealloc;
-(NSObject*<ATAPIRequestDelegate>)delegate;
-(void)start;
-(void)showAlert;
-(BOOL)failed;
-(void)setFailed:(BOOL)arg1 ;
-(void)setErrorTitle:(NSString *)arg1 ;
-(void)setErrorMessage:(NSString *)arg1 ;
-(NSString *)errorTitle;
-(NSString *)errorMessage;
-(void)setTimeoutInterval:(double)arg1 ;
-(double)timeoutInterval;
@end
