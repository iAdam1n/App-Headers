/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:44:03 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/DE3331E2-1165-4E9B-8894-BDF4D69820B5/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <ECBCricketApp/OTHERDataHubEntity.h>

@class ECBMatch;

@interface ECBCommentaryDataHubEntity : OTHERDataHubEntity {

	ECBMatch* _match;

}

@property (nonatomic,readonly) ECBMatch * match;              //@synthesize match=_match - In the implementation block
-(id)fetchRequestForManagedObjectContext:(id)arg1 ;
-(BOOL)updateOnDidBecomeActive;
-(id)initWithMatch:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)priority;
-(ECBMatch *)match;
-(Class)operationClass;
-(double)pollingInterval;
@end

