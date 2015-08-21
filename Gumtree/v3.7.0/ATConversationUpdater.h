/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:00 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ATAPIRequestDelegate.h>

@protocol ATConversationUpdaterDelegate;
@class NSObject, ATAPIRequest, NSString;

@interface ATConversationUpdater : NSObject <ATAPIRequestDelegate> {

	NSObject*<ATConversationUpdaterDelegate> delegate;
	ATAPIRequest* request;
	BOOL creatingConversation;

}

@property (assign,nonatomic) NSObject*<ATConversationUpdaterDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)conversationExists;
+(void)registerDefaults;
+(BOOL)shouldUpdate;
+(id)currentConversation;
-(void)processResult:(id)arg1 ;
-(void)at_APIRequestDidFail:(id)arg1 ;
-(void)at_APIRequestDidFinish:(id)arg1 result:(id)arg2 ;
-(void)at_APIRequestDidProgress:(id)arg1 ;
-(float)percentageComplete;
-(void)createOrUpdateConversation;
-(void)cancel;
-(void)dealloc;
-(void)setDelegate:(NSObject*<ATConversationUpdaterDelegate>)arg1 ;
-(NSObject*<ATConversationUpdaterDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
@end

