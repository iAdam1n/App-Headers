/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:12 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ATTask.h>
#import <Gumtree/ATAPIRequestDelegate.h>

@class ATAPIRequest, ATFeedback, NSString;

@interface ATFeedbackTask : ATTask <ATAPIRequestDelegate> {

	ATAPIRequest* request;
	ATFeedback* feedback;

}

@property (nonatomic,retain) ATFeedback * feedback; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setup;
-(void)teardown;
-(void)at_APIRequestDidFail:(id)arg1 ;
-(void)at_APIRequestDidFinish:(id)arg1 result:(id)arg2 ;
-(void)at_APIRequestDidProgress:(id)arg1 ;
-(BOOL)canStart;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(float)percentComplete;
-(void)stop;
-(void)start;
-(void)cleanup;
-(ATFeedback *)feedback;
-(void)setFeedback:(ATFeedback *)arg1 ;
-(id)taskName;
@end

