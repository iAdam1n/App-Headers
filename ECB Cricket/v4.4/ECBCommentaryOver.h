/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:19:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/08508F9E-DA8B-4AFD-AB09-7444BD482D44/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSSet, ECBMatch;

@interface ECBCommentaryOver : NSManagedObject

@property (nonatomic,retain) NSNumber * inningsId; 
@property (nonatomic,retain) NSNumber * overNumber; 
@property (nonatomic,retain) NSSet * matchEvents; 
@property (nonatomic,retain) NSSet * commentary; 
@property (nonatomic,retain) ECBMatch * match; 
-(BOOL)updateFromDictionaries:(id)arg1 ;
@end
