/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, NSDate, WAChatSession;

@interface WAChatProperties : NSManagedObject

@property (nonatomic,retain) NSNumber * enabled; 
@property (nonatomic,retain) NSString * soundName; 
@property (nonatomic,retain) NSNumber * alerts; 
@property (nonatomic,retain) NSDate * muteDate; 
@property (nonatomic,retain) WAChatSession * chatSession; 
-(void)setMuteDate:(NSDate *)arg1 ;
@end
