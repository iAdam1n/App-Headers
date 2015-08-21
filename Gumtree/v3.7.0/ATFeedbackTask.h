/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:00 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
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
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(float)percentComplete;
-(void)stop;
-(void)start;
-(void)cleanup;
-(void)setFeedback:(ATFeedback *)arg1 ;
-(ATFeedback *)feedback;
-(id)taskName;
@end

