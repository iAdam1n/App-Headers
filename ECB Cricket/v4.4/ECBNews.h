/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:19:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/08508F9E-DA8B-4AFD-AB09-7444BD482D44/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSNumber, NSURL, NSDate, NSSet;

@interface ECBNews : NSManagedObject

@property (copy,nonatomic) NSString * content; 
@property (retain,nonatomic) NSNumber * featured; 
@property (copy,nonatomic) NSString * htmlContent; 
@property (copy,nonatomic) NSString * imagePath; 
@property (copy,nonatomic) NSURL * thumbnailImageUrl; 
@property (copy,nonatomic) NSURL * imageUrl; 
@property (assign,nonatomic) BOOL hiddenInApp; 
@property (copy,nonatomic) NSDate * lastModified; 
@property (assign,nonatomic) BOOL matchReport; 
@property (retain,nonatomic) NSNumber * newsId; 
@property (copy,nonatomic) NSString * newsType; 
@property (copy,nonatomic) NSString * podcastUrl; 
@property (assign,nonatomic) BOOL published; 
@property (copy,nonatomic) NSString * shorturl; 
@property (copy,nonatomic) NSDate * sortTimestamp; 
@property (copy,nonatomic) NSString * summary; 
@property (copy,nonatomic) NSString * teaser; 
@property (copy,nonatomic) NSDate * timestamp; 
@property (copy,nonatomic) NSString * title; 
@property (copy,nonatomic) NSDate * updateTimestamp; 
@property (copy,nonatomic) NSString * weburl; 
@property (retain,nonatomic) NSSet * competitions; 
@property (retain,nonatomic) NSSet * matches; 
@property (retain,nonatomic) NSSet * photos; 
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
@end
