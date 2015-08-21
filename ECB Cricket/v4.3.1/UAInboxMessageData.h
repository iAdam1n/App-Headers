/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:44:05 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/DE3331E2-1165-4E9B-8894-BDF4D69820B5/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSURL, NSDate, NSDictionary;

@interface UAInboxMessageData : NSManagedObject {

	NSString* contentType;

}

@property (nonatomic,copy) NSString * messageID; 
@property (nonatomic,retain) NSURL * messageBodyURL; 
@property (nonatomic,retain) NSURL * messageURL; 
@property (nonatomic,copy) NSString * contentType; 
@property (assign,nonatomic) BOOL unread; 
@property (assign) BOOL unreadClient; 
@property (assign) BOOL deletedClient; 
@property (nonatomic,retain) NSDate * messageSent; 
@property (nonatomic,retain) NSDate * messageExpiration; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) NSDictionary * extra; 
@property (nonatomic,retain) NSDictionary * rawMessageObject; 
@property (nonatomic,readonly) BOOL isGone; 
-(BOOL)isGone;
-(void)setContentType:(NSString *)arg1 ;
-(NSString *)contentType;
@end

